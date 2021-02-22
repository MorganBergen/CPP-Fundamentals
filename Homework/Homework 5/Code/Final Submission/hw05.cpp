/*
 * Morgan Bergen
 * B493R546
 * HW05
 *
 * The following two declarations are required:
 *   const int SIZE = 5;
 *   const char dog[SIZE] = {‘B’, ‘I’, ‘N’, ‘G’, ‘O’};
 * ANY time the word BINGO needs to be printed, in any form, it must be done by accessing the array
 * ANY time the word BINGO needs to be printed, in any form, it must be done with a loop
 */

#include <iostream>
#include <cctype>

int main(){
    
    const int SIZE = 5;
    const char star[SIZE] = {'*', '*', '*', '*', '*'};
    const char dog[SIZE] = {'B', 'I', 'N', 'G', 'O'};
    
    for (int a = 0; a < 6; a++) {
        std::cout << "There was a farmer had a dog\n";
        std::cout << "and Bingo was his name-o\n";
        
        for (int b = 0; b < 3; b++) {
            for (int c = 0; c < a; c++)
                std::cout << star[c] << " ";
            for (int d = a; d < 5; d++)
                std::cout << dog[d] << " ";
            
            std::cout << std::endl;
        }
        std::cout << "And Bingo was his name-o\n" << std::endl;
    }
    return 0;
}
