/*
* Morgan Bergen
* B493R546
* lab04
* Declare a function called is_even that returns a bool.
* The parameter list will consist of an integer.
* It will return true if the integer passed to the function is even, and false otherwise.
* The main function shall ask the user for a number, pass the number to the function is_even(), and print one of the following sentences based on the output of the function: "You entered an even number!" or "You entered an odd number!"
*/

#include <iostream>

// Refer to line 23
bool is_even(int choice);

int main(){
    int choice;
    bool checker;
        std::cout << "Enter any number: ";
        std::cin >> choice;
    
    checker = is_even(choice);
        if(checker){
        std::cout << "You entered an even number!\n\n";
        }
        else{
        std::cout << "You entered an odd number!\n\n";
        }

return 0;
}

bool is_even(int choice){
 
    if (choice % 2 == 0)
        choice = true;
    else
        choice = false;
// Pass to line 10
return choice;
}
