#include <iostream>
#include <vector>
#include <string>

int main(){
    
    // Dynamic array example
    const int COLUMNS = 5;
    std::string phrase;
    
    std::cout << "Phrase: ";
    std::getline(std::cin, phrase);
    
    unsigned int rows = phrase.length() / COLUMNS + 1;
    
    // Create 2D array on heap
    char **box = new char*[rows];
    for (int i = 0; i < rows; ++i){
        box[i] = new char[COLUMNS];
    }
    
    unsigned int phaseIdx = 0;
    for (int row = 0; row < rows; ++row){
        for (int col = 0; col < COLUMNS; ++col){
            if (phaseIdx < phrase.length()){ // Type mismatch, because unsigned int
                box[row][col] = phrase[phaseIdx];
                ++phaseIdx;
            }
        }
    }
    
    // Print the 2D array
    for (int row = 0; row < rows; ++row){
        for (int col = 0; col < COLUMNS; ++col){
            std::cout << box[row][col] << ' ';
        }
        std::cout << std::endl;
    }
    
    // Deleting 2D array
    for (int i =0; i <rows; ++i){
        delete [] box[i];
        box[i] = nullptr;
    }
    delete [] box;
    box = nullptr;
    
    
    
    return 0;
}




/*
 
 Assume a width of 5 columns
 
 Getting rows set up
 
 multidimenional arrays are arrays of arrays
 
 */
