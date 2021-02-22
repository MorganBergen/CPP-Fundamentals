//Page 177
// Solution to Programming Project 3.9


#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    
    srand(time(NULL));
    
    double winStay = 0.00;
    double winSwitch = 0.00;
    
    for (int trial = 0; trial < 10000; trial++)
    {
        // Door for the prize
        double prize = rand() % 5;
        // Door for the contestant's choice
        double choice = rand() % 5;
        // Find a door to reveal
        double reveal;
        do
        {
            reveal = rand() % 5;
            
        } while ((reveal == prize) || (reveal == choice));
        
        // Find the door to switch to
        int switchDoor;
        for (int i = 0; i < 3; i++)
        {
            
            if ((i != reveal) && (i != choice))
            {
                switchDoor = i;
            }
        }
        //std::cout << "The prize is behind door " << prize << std::endl;
        //std::cout << "The contestant picked door " << choice << std::endl;
        
        if (prize == choice)
        {
            winStay++;
            //std::cout << "Win if stay." << std::endl;
        }
        
        if (prize == switchDoor)
        {
            winSwitch++;
            //std::cout << "Win if switch." << std::endl;
        }
    }
    
    std::cout << "Wins when staying: " << winStay << std::endl;
    std::cout << "Wins when switching: " << winSwitch << std::endl;
    
    return 0;
}
