/*
 Reference Notes for hw02
 */

#include <iostream>

int main() {
    
    int menuChoice;
    std::cout << "Menu:\n"
              << "\t 1. Option 1\n"
              << "\t 2. Option 2\n"
              << "Enter your choice (anthing else quits): ";
    std::cin >> menuChoice;
    
    if (menuChoice == 1) {
        std::cout << "Well, well, well\n";
    } else if (menuChoice == 2){
        std::cout << "If it isn't the consequences of my own actions\n";
    } else {
        return 0;
    }
    
    return 0;
}
