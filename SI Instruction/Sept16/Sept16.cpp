#include <random>
#include <iostream>

int main()
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int>uniDist(0,2);
    
    //RED, BLUE, GREEN
    
    std::string array [] = {"RED", "BLUE", "GREEN"};
    
    for (int i = 0; i < 8; i++)
        std::cout << array[uniDist(generator)] << std::endl;
    
    return 0;
}
