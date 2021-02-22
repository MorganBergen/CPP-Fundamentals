
#include "Money.hpp"
#include <iostream>

int main()
{
    Money one, two(3, 50), three(-2.24);

    std::cout << "I have ";
    one.print();
    std::cout << ", you have ";
    two.print();
    std::cout << ", and they have ";
    three.print();
    std::cout << '\n';
    // There is a way to simply have std::cout << one, but it's beyond the scope of this lecture

    std::cout << "Combined, you both have ";
    Money sum = two.add(three);  // Similarly, it possible to do two + three
    sum.print();
    std::cout << '\n';

    Money four = 8.50;
    std::cout << "Now someone has ";
    four.print();
    std::cout << '\n';

    one = four;
    std::cout << "Now I am the one who has ";
    one.print();
    std::cout << '\n';

    return 0;
}