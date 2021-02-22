/*
    std::random_device rd;
    std::mt19937 prng(rd());
    std::uniform_int_distribution<int>d3(1,3);
    
    std::cout << d3(prng) << '\n';
 
 
 
 LECTURE TO USE FOR HW04
 int roll_d6_die(int upperLimit)
 {
   std::random_device rd;
   std::mt19937 generator(rd());
   std::uniform_int_distribution<int>uniDist(1,upperLimit);

   return uniDist(generator);
 }
 
 int main() {

     std::cout << roll_d6_die(6) << std::endl;
     
     return 0;
 }
 
 
*/

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int>uniDist(0, 2);
    
    //RED, BLUE, GREEN
    
    std::string array [] = {"RED", "BLUE", "GREEN"};
    
    for (int i = 0; i < 8; i++)
        std::cout << array[uniDist(generator)] << std::endl;
    
    return 0;
}

