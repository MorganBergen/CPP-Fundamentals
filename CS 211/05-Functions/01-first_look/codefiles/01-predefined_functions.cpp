#include <cmath>
#include <iostream>

int main()
{
    int sideOne = 0;
    int sideTwo = 0;

    std::cout << "Side one: ";
    std::cin >> sideOne;
    std::cout << "Side two: ";
    std::cin >> sideTwo;

    std::cout << "The hypotenuse is " << std::hypot(sideOne, sideTwo) << '\n';

    return 0;
}