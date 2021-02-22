#include <iostream>

int main()
{
    int x = 5;

    std::cout << 2 * (x++) << '\n';
    std::cout << x << '\n';

    return 0;
}
