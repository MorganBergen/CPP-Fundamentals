#include <iostream>

int main()
{
    int counter = 10;

    do {
        std::cout << counter << '\n';
        counter--;
    } while (counter > 0);

    return 0;
}