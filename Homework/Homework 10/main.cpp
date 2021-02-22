#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "Zipcode.hpp"
#include <array>
#include <sstream>

TEST_CASE("Default Constructor & get_string()")
{
    Zipcode zip;
    CHECK(zip.get_string() == "00601");
}

TEST_CASE("Parameterized Constructor (std::string) & get_string()")
{
    Zipcode zip("00501");  // Lowest zip code in US. An IRS office in Holtsville, NY
    CHECK(zip.get_string() == "00501");
}

TEST_CASE("Parameterized Constructor (std::string) - Bad Values")
{
    SUBCASE("Too Short")
    {
        Zipcode zip("123");
        CHECK(zip.get_string() == "00601");
    }

    SUBCASE("Too Long")
    {
        Zipcode zip("123456");
        CHECK(zip.get_string() == "00601");
    }

    SUBCASE("Bogus Characters")
    {
        Zipcode zip("123A5");
        CHECK(zip.get_string() == "00601");
    }
}

TEST_CASE("get_digits()")
{
    SUBCASE("Zip 90210")
    {
        Zipcode zip("90210");  // Beverly Hills, CA
        CHECK(zip.get_digits() == std::array<int, 5>{ 9, 0, 2, 1, 0 });
    }

    SUBCASE("Default Zip")
    {
        Zipcode zip;
        CHECK(zip.get_digits() == std::array<int, 5>{ 0, 0, 6, 0, 1 });
    }
}

TEST_CASE("get_POSTNET()")
{
    SUBCASE("Zip 12345")
    {
        Zipcode zip("12345");  // GE offices in Schenectady, NY
        CHECK(zip.get_POSTNET() == "10001100101001100100101010010101");
    }

    SUBCASE("Zip 68790")
    {
        Zipcode zip("68790");  // Winside, NE
        CHECK(zip.get_POSTNET() == "10110010010100011010011000110001");
    }
}

TEST_CASE("set_zipcode() - Valid")
{
    Zipcode zip;
    zip.set_zipcode("99001");  // Airway Heights, WA
    CHECK(zip.get_string() == "99001");
}

TEST_CASE("set_zipcode() - Invalid")
{
    Zipcode zip;

    SUBCASE("Too Short")
    {
        zip.set_zipcode("123");
        CHECK(zip.get_string() == "00601");
    }

    SUBCASE("Too Long")
    {
        zip.set_zipcode("123456");
        CHECK(zip.get_string() == "00601");
    }

    SUBCASE("Bogus Characters")
    {
        zip.set_zipcode("123A5");
        CHECK(zip.get_string() == "00601");
    }
}

TEST_CASE("print_barcode()")
{
    std::ostringstream sout;
    std::string        comp;

    SUBCASE("Zip 12345")
    {
        Zipcode zip("12345");
        zip.print_barcode(sout);
        comp = sout.str();

        CHECK(comp == "|       | |     |   |     | |     |     |   |   |     |   |   | \n"
                      "| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | \n");
    }

    // Resetting the stringstream. Doing it in its own scope to immediately
    // get rid of the old state
    {
        std::ostringstream().swap(sout);
    }

    SUBCASE("Zip 68790")
    {
        Zipcode zip("68790");
        zip.print_barcode(sout);
        comp = sout.str();
        CHECK(comp == "|   | |     |     |   |       | |   |     | |       | |       | \n"
                      "| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | \n");
    }
}
