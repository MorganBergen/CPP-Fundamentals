#include <cstdlib>  // abs()
#include <iostream>

void write_spaces(int row);
void write_hashes(int row);

int main()
{
    // DIAMOND
    for (int i = -3; i <= 3; i++) {  // Draws a diamond to the screen
        write_spaces(i);
        write_hashes(i);
        std::cout << '\n';
    }
    // DIAMOND

    return 0;
}


// Scroll down to see the function implementations


/*
 * On scrolling down, you'll see that the functions each contain their own
 * for loops. This means that if we didn't have functions, we would be dealing
 * with nested for loops that look something like:
 *
 * for () {
 *      for () {
 *          // Code that writes spaces
 *      }
 *      for () {
 *          // Code that writes hases
 *      }
 * }
 *
 * While not impossible to understand, the functions allow us to hide the
 * nested loops and simplify the code.
 */


void write_spaces(int row)
{
    for (int i = 1; i <= abs(row); i++)
        std::cout << " ";
}

void write_hashes(int row)
{
    for (int i = (8 - (2 * std::abs(row))) * 2; i > 0; i -= 2) {
        i /= 2;
        std::cout << "#";
        i *= 2;
    }
}