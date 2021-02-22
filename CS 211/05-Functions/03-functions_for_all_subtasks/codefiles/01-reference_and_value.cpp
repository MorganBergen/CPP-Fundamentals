#include <iostream>

/*
 * Changes argument and prints it
 */
void changeValue(int x);

/*
 * Changes argument and prints it
 */
void changeReference(int& x);

int main()
{
    int y = 42;

    std::cout << "y is " << y << '\n';
    changeValue(y);
    std::cout << "y is " << y << '\n';

    std::cout << "\n\n";

    std::cout << "y is " << y << '\n';
    changeReference(y);
    std::cout << "y is " << y << '\n';

    return 0;
}

void changeValue(int x)
{
    x = 24;
    std::cout << "In changeValue, x is " << x << '\n';

    return;
}

void changeReference(int& x)
{
    x = 24;
    std::cout << "in changeReference, x is " << x << '\n';

    return;
}