#include <iostream>

int main()
{
    int counter = 10;

    // Inside the parentheses is a Boolean expression; the loop repeats as long
    // as the Boolean expression evaluates to true
    while (counter > 0) {
        std::cout << counter << '\n';
        counter--;
    }

    return 0;
}