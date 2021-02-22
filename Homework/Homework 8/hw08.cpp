/*
 Name:          Morgan Bergen
 WSU ID:        B493R546
 Assignment:    hw08
 
 Background:
 Square code is a simple transposition cipher that utilizes a square (or rectangle) arrangement of your plain text to create a ciphertext.
 You will write a program that allows the user to type a message of any length, then encode it using an appropriately sized 2S array.
 
 Assignment Requirements:
 Prompt the user to type in a message
 Strip all white spaces and punctuation marks from the message.
    Tabs, spaces, new lines, and carriage returns count as white space
    Period, comma, apostrophe, exclamation mark, question mark, and hyphen count as common punctuation marks
 The message will then be inserted into a dynamic 2D array; left to right, top to bottom.
    The array will always be a square.
    You must determine the dimensions of the array based on the input message
    If there is empty sapce left in a row, it must be filled with '#'
    If there is an empty row (nothing but '#'), that is acceptable.
 The message is encoded by reading the columns; top to bottom, left to right
 */

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

std::string alphaNumonly(std::string);

int main(){
    
    std::string sentence;
    std::string convertedSentence;
    std::cout << "Enter a message to encoded: ";
    std::getline(std::cin, sentence);
    convertedSentence = alphaNumonly(sentence); //Sentence Converted
    std::cout << std::endl;
        
    float squareRoot = sqrt(convertedSentence.size()); //Square Root of Size

    // Creating the Column and Row Dimensions for a square shape
    const int columns = ceil(squareRoot);
    long double rows = columns;
    
    //Total Amount of Characters for the square, and Total Amount of Xs for the square.
    int totalCharacters = columns * rows;
    unsigned long XsNeeded = totalCharacters - convertedSentence.size();
        
    // Creating the structure for the 2D array on heap
    char **structure = new char*[int(rows)];
    for (int a = 0; a < rows; ++a) {
        structure[a] = new char[columns];
    }
            
    unsigned int SentenceIndex = 0;
    for (int row = 0; row < rows; ++row) {
        for (int column = 0; column < columns; ++column) {
            if (SentenceIndex < convertedSentence.size()){
                structure[row][column] = convertedSentence[SentenceIndex];
                ++SentenceIndex;
            }
        }
    }
   
    int counter = 0;
    
    // Print the Encoded Message
    for (int row = 0; row < rows; ++row) {
        for (int column = 0; column < columns; column++) {
            if (counter < SentenceIndex) {
                std::cout << structure[row][column] << ' ';
                counter++;
            } else {
                column = column - 1;
                for (int i = 0; i < XsNeeded; ++i) {
                    column++;
                    if (column < columns) {
                        std::cout << "#" << ' ';
                        XsNeeded--;
                    }
                }
            }
        }
        std::cout << std::endl;
    }
        
    std::cout << std::endl;
    
    for (int a = 0; a < rows; ++a) {
        delete [] structure[a];
        structure[a] = nullptr;
    }
    delete [] structure;
    structure = nullptr;
    
    return 0;
}


std::string alphaNumonly(std::string sentence){
    
    std::string convertedSentence;
    
    for (unsigned int i = 0; i < sentence.size(); i++) {
        if (isalnum(sentence[i])) {
            convertedSentence += sentence[i];
        }
    }
    return convertedSentence;
}
