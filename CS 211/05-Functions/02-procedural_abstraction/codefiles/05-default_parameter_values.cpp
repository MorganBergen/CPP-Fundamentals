#include <iostream>

int find_max(int one, int two = 0);

int main()
{
    int x = 5;
    x     = find_max(x);  // , 7);
    std::cout << x << std::endl;

    return 0;
}

int find_max(int one, int two)
{
    return one > two ? one : two;
}