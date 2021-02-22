#include <iostream>
#include <array>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <string>


void encodeCaesar(std::string& m, int shift);

int main(){
    const int SHIFT = 4;
    
    std::string message;
    
    std::cout << "Enter a message: ";
    std::getline(std::cin, message);
    
    for (auto& i : message) {
        i = std::toupper(i);
    }
    
    // std::transform(message.begin(), message.end(), message.begin(),
    //
    
    
    std::cout
    
    return 0;
    
}

void encodeCaesar(std::string& m, int shift)
{
    for (auto& i : m){
        if (i >= 'A' && i <= 'Z') {
            i = ((i + shift - 'A') % 26) + 'A';
        }
    }
}

void decodeCaesar(std::string& m, int shift)
{
    for (auto& i : m){
        if (i >= 'A' && i <= 'Z') {
            i = ((i - shift - 13) % 26) + 'A';
        }
    }
}

