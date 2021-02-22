/*
 * Morgan Bergen
 * B493R546
 * lab03
 * Write a program that draws the following to the screen:
 *    #
 *   ##
 *  ###
 * ####
 *#####
 * A written description of the shape (in case Blackboard formatting doesn't look good):
 * 4 spaces, 1 pound sign
 * 3 spaces, 2 pound signs
 * 2 spaces, 3 pound signs
 * 1 space, 4 pound signs
 * 0 spaces, 5 pound signs.
 * There are no blank lines.
 * The restriction is that the characters '#', '\n', and ' ' (space) are allowed to appear once and only once in your file.
 */

#include <iostream>

int main(){
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            std::cout << ' ';
        }
        for (int j = 0; j < i + 1; ++j){
            std::cout << '#';
        }
        std::cout << '\n';
    }
    
return 0;
    
}
