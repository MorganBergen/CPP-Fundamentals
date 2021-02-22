/*
 * Name: Adam Sweeney
 * WSUID:
 * HW01
 * Description:
 */

#include <iostream>

int main(){
    
    int numPennies;
    int numNickles;
    int numDimes;
    int numQuarters;
    
    std::cout   << "Please enter the number of\n"
                <<"\tQuarters: ";
    std::cin    >> numQuarters;
    if (numQuarters < 0){
        std::cerr << "Negative quarters treated like 0.\n";
        numQuarters = 0;
    }
    
    std::cout   << "\tDimes: ";
    std::cin    >> numDimes;
    if (numDimes < 0) {
        std::cerr << "Negative dimes treated like 0.\n";
        numDimes = 0;
    }
    
    std::cout   << "\tNickels: ";
    std::cin    >> numNickles;
    if (numNickles < 0) {
        std::cerr << "Negative nickels treated like 0.\n";
        numNickles = 0;
    }
    
    std::cout   << "\tPennies: ";
    std::cin    >> numPennies;
    if (numNickles < 0) {
        std::cerr << "Negative pennies treated like 0.\n";
        numNickles = 0;
    }
    
    int totalCash = ((numQuarters * 25) + (numDimes * 10) + (numNickles * 5) + (numPennies));
    std::cout << "You have " << totalCash << " cents\n.";
    
}
