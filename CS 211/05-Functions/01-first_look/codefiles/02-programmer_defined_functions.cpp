#include <iostream>

double min(double a, double b);

int main()
{
    double firstEntry;
    double secondEntry;
    std::cout << "Enter a number: ";
    std::cin >> firstEntry;
    std::cout << "Enter another number: ";
    std::cin >> secondEntry;

    double result = min(firstEntry, secondEntry);

    std::cout << "The smaller number was: " << result << '\n';

    return 0;
}

double min(double a, double b)
{
    return (a < b) ? a : b;
}