//Lab Exercise on Aug 25

#include <iostream>

int main ()
{
    //Assignment: Prompt user for a number/Ask the user for a number to in &Show them the text "Double x is y" where x is the original number, and y = 2x
    
    //Note by Instructor:  One recommendation: add a '\n' to the end of that cout. That greyed out % indicates that the program didn't put a new line in, and your shell (zsh) did it for you. Not all shells do this, bash being one that doesn't. Otherwise it looks good!
    
    int x = 0;
    int y;
    
    std::cout << "Enter any Number\n";
    std::cin >> x;
    y = 2*x;
    std::cout << "Double " << x << " is " << y;
    std::cout << "\n";
    
    return 0;

}
