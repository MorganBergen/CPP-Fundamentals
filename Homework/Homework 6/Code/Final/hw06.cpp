/*
 Morgan Bergen
 B493R546
 hw06
 
 Background:
 A Caesar shift is one of the oldest forms of encryption.  It was originally implemented by using two strips of paper with the alphabet written on them.  One of the strips was then shifted a certain number of spaces over.  For example, a shift of 3 would change the letter 'A' -> 'D', 'B' -> 'E', and so on.  'Z' -> 'C', meaning that the alphabet wrapped back around to the beginning.
 
 Description:
 This assignment will allow the user to enter a message.
 We will then encode it by shifting it 4 characters over and decode it again.
 
 Requirements:
 Declare 2 functions, one to encode and the other to decode the message.
 Any circumvention of these functions for the sake of "correct output" will result in a grade of 0 for this assignment.
 Declare the necessary constants in your main function
 When the user is done typing the message, they will hit the Enter Key.  That keystroke is not to be saved to the array.
 Non-letter characters will be ignored and not encrypted nor decrypted.
 
 Sample Run
 Please enter a message:  zip zap zooey
 
 ZIP ZAP ZOOEY
 DMT DET DSSIC
 ZIP ZAP ZOOEY
 
 */

#include <iostream>
#include <array>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <cctype>

void encode_message(std::string &message);
void decode_message(std::string &message);

int main(){
    
    // Declare necessary constants
    std::string Usermessage;
    std::cout << "Please enter a message: ";
    std::getline(std::cin, Usermessage);
    
    decode_message(Usermessage);
    std::cout << std::endl;
    
    encode_message(Usermessage);
    std::cout << std::endl;
    
    decode_message(Usermessage);
    std::cout << std::endl;
    
    
    return 0;
}

// Function 1 encodes the message by shifting each letter 4 characters over
void encode_message(std::string &message){
    for (std::size_t i = 0; i < message.size(); i++) {
        
        if (static_cast<char>(message[i]) == ' ') {
            std::cout << " ";
        } if (static_cast<char>(message[i]) == 'w') {
            std::cout << static_cast<char>(message[i] - 54);
        } if (static_cast<char>(message[i]) == 'x') {
            std::cout << static_cast<char>(message[i] - 54);
        } if (static_cast<char>(message[i]) == 'y') {
            std::cout << static_cast<char>(message[i] - 54);
        } if (static_cast<char>(message[i]) == 'z') {
            std::cout << static_cast<char>(message[i] - 54);
        } else if (static_cast<char>(message[i] != 'y')) {
            std::cout << static_cast<char>(message[i] - 28);
        }
    }
}

// Function 2 decodes the message back to it's original input with capitalizations
void decode_message(std::string &message) {
    for (std::size_t i = 0; i < message.size(); i++) {
        
        if (static_cast<char>(message[i]) == ' ') {
            std::cout << " ";
        } else {
            std::cout << static_cast<char>(message[i] - 32);
        }
    }
}
