#include <fmt/core.h>

int main()
{
    char name[] = "Adam";
    fmt::print("Hello {}! {}\n", name, 42);
    fmt::print("Hello {1}! {0}\n", 42, name);
    fmt::print("Hello {name}! {number}\n", fmt::arg("number", 42), fmt::arg("name", name));
}

/*
 * This code uses a third-party printing library, parts of which are included
 * in C++20. Its printing is a mix of printf and Python-style print statements.
 * There are multiple examples and an extra variable to better showcase the
 * features. This style of printing gains both the efficiency of printf() and
 * type-safety of std::cout
 */