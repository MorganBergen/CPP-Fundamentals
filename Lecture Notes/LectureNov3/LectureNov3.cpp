/*
 Morgan Bergen
 B493R546
 lab08
 
 Description
 Ask the user for an adjective.
 Place the adjective into the following sentence:
 "I don't want to drop this bag, it's too _____."
 Print the complete sentence into a file called madlib.txt
 
 #include <fstream>
 #include <iostream>

  int main(){
      
      std::ofstream fout("output.txt");
      if (!fout.is_open()) {
          std::cerr << "Error opening file..." << std::endl;
          
          return 1;
      }
      
      fout << "Out of the black" << std::endl;
      fout.close();
      
      std::ifstream fileInput("input.txt");
      if (fileInput.is_open()) {
          std::cerr << "Error opening file..." << std::endl;
          return 1;
      }
      
      int temporary;
   
      while (fileInput >> temporary) {
          std::cout << temporary << ' ';
      }
      
      fileInput.close();
      
      return 0;

 
 */

#include <fstream>
#include <iostream>

int main(){
    
    std::string adjetive;
    std::cout << "Please enter an adjective: ";
    std::getline(std::cin, adjetive);
    std::string sentence;
    sentence = "I don't want to drop this bag, it's too ";
    
    std::ofstream fout("madlib.txt");
    if (!fout.is_open()) {
        std::cerr << "Error opening file..." << std::endl;
        
        return 1;
    }
    
    fout << sentence << adjetive << "." << std::endl;
    fout.close();
    
    return 0;
}
