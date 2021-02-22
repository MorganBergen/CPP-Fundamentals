#include <iostream>

// Ask the user how many numbers they want to enter, and provide a sum of the
// 'n' numbers entered by the user
int main()
{
    int count;

    std::cout << "How many numbers will we be summing today? ";
    std::cin >> count;

    /*
     * pseudo-code
     *
     * repeat i = 0 to thisMany times, i increments
     *      get input
     *      add input to running total
     */

    int sum = 0;
    for (int i = 0; i < count; i++) {
        int input;
        std::cout << "Number: ";
        std::cin >> input;

        sum += input;
    }

    std::cout << sum << '\n';

    return 0;
}

/*
 * Taking the time to separate our problem into two parts helped us out. First,
 * we figured out our algorithm. Then, we translated our algorithm to code. Too
 * often, when trying to combine these steps, we will get our thought processes
 * mixed up and confuse ourselves on both fronts.
 *
 * Writing pseudo-code is an excellent language-agnostic tool to have.
 * Translating gets easier and easier to the more familiar we become with a
 * particular programming language.
 */