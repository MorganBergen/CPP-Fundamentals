#include <cmath>    // std::pow()
#include <iomanip>  // std::put_money
#include <iostream>
#include <locale>

/*
 * Calculates the price per square inch of a pizza
 *
 * Parameters:
 *   diameter: diameter of pizza in inches
 *   price: pre-tax price of pizza
 *
 * Return:
 *   Price per square inch of the pizza
 */
double calculatePPSI(int diameter, double price);

int main()
{
    int    firstDiameter;
    int    secondDiameter;
    double firstPrice;
    double secondPrice;

    std::cout << "Enter first pizza diameter: ";
    std::cin >> firstDiameter;
    std::cout << "Enter first pizza price: ";
    std::cin >> firstPrice;
    std::cout << "Enter second pizza diameter: ";
    std::cin >> secondDiameter;
    std::cout << "Enter second pizza price: ";
    std::cin >> secondPrice;

    double firstPPSI  = calculatePPSI(firstDiameter, firstPrice);
    double secondPPSI = calculatePPSI(secondDiameter, secondPrice);

    // https://en.cppreference.com/w/cpp/io/manip/put_money
    // The money amount must be in pennies; this is why the variables are being multiplied by 100
    // A locale is also required for std::put_money() to function properly
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << "First pizza price per square inch: $" << std::put_money(firstPPSI * 100) << '\n'
              << "Second pizza price per square inch: $" << std::put_money(secondPPSI * 100)
              << '\n';

    std::cout << "Choose the ";
    if (firstPPSI < secondPPSI) {
        std::cout << "first";
    } else if (firstPPSI == secondPPSI) {
        std::cout << (firstPrice < secondPrice ? "first" : "second");
    } else {
        std::cout << "second";
    }
    std::cout << " pizza.\n";
}

double calculatePPSI(int diameter, double price)
{
    const double PI   = 3.1415926;
    double       area = PI * std::pow((static_cast<double>(diameter) / 2), 2);
    return price / area;
}