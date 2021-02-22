/*
 * Name: Morgan Bergen
 * WSU ID: B493R546
 * HW03
 * Description: Write a program that draws shapes to the terminal while observing certain restrictions.
 * 
 * The program takes no input
 * 􏰀For each shape, the following std::cout expressions may only appear once:
 *     std::cout << '#'
 *     std::cout << " "
 *     std::cout << '\n'
 *􏰀 Place two blank lines between each shape
 *     NOTE: The restriction above does not apply to this requirement
 * The program output must look exactly like that found in the sample run
 *
 * Sample Run
 *########
 * ######
 *  ####
 *   ##
 *
 *
 *   #
 *  # #
 * #   #
 *#     #
 * #   #
 *  # #
 *   #
 *
 *
 *#     #
 * #   #
 *  # #
 *   #
 *  # #
 * #   #
 *#     #
 *
 *
 *#######
 *#     #
 *#     #
 *#     #
 *#######
 *
 *
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

int main() {
    
// shape 1
    
    for (int a = 0; a < 4; ++a) {
        for (int b = 0; b < a; b++) {
            std::cout << ' ';
        }
        for (int c = 0; c < 8 - (a * 2); c++) {
            std::cout << '#';
        }
        std::cout << '\n';
    }
    
    std::cout << '\n';
    std::cout << '\n';
    
// shape 2
    
    for (int row = -3; row <= 3; row++) {
        if (row < 4){
            for (int column = -3; column <= 4; column++){
                if ((abs(column) == abs(abs(row) - 3))){
                    std::cout << '#';
                } else {
                    std::cout << ' ';
                }
            }
            std::cout << '\n';
        }
    }
    
    std::cout << '\n';
    std::cout << '\n';
    
// shape 3
    
    for (int row = -3; row <= 3; row++) {
        if (row < 4){
            for (int column = -3; column <= 4; column++){
                if ((abs(column) == abs(abs(row)))){
                    std::cout << '#';
                } else {
                    std::cout << ' ';
                }
            }
            std::cout << '\n';
        }
    }
    
    std::cout << '\n';
    std::cout << '\n';
    
// shape 4
    
    for (int row = -2; row <= 2; row++) {
        if (row < 4){
            for (int column = -2; column <= 5; column++)
                if  (
                    ((abs(row) == 2 && abs(column) == 2)) ||
                    ((abs(row) == 2 && abs(column) == 1)) ||
                    ((abs(row) == 2 && abs(column) == 0)) ||
                    ((abs(row) == 2 && abs(column) == 3)) ||
                    ((abs(row) == 2 && abs(column) == 4)) ||
                    ((abs(row) == 1 && abs(column) == 4)) ||
                    ((abs(row) == 1 && (column)    == -2))||
                    ((abs(row) == 0 && (column)    == -2))||
                    ((abs(row) == 0 && abs(column) == 4))
                     ){
                    std::cout << '#';
                } else {
                    std::cout << ' ';
                }
            std::cout << '\n';
        }
    }
    
    std::cout << '\n';
    std::cout << '\n';
    
    return 0;
}
