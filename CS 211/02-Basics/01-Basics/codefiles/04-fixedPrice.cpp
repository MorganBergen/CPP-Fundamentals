#include <iostream>

int main()
{
    double price = 78.50;

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    std::cout << "Your price is $" << price << '\n';

    return 0;
}