#include <iostream>

// Both parameters have default values in this case
void printCoords(int x = 0, double y = 0)
{
    std::cout << "(" << x << ", " << y << ")" << '\n';
}

int main()
{
    printCoords();  // This function call overrides both default values

    return 0;
}