#include <array>
#include <iomanip>
#include <iostream>

int main()
{
    const int ROWS    = 3;
    const int COLUMNS = 4;

    // A using declaration can help make typing annoying types easier.
    // You will see typedefs in older code. Using directives for type aliases
    // started with C++11 and are preferred for modern C++. A typedef would
    // look like this:
    //
    // typedef std::array<std::array<int, COLUMNS>, ROWS> twoDIntrray;
    //
    // The lack of an operator between the types can lead to confusion. The
    // trick is that a typedef is a declaration of a type. I am declaring my
    // awkard type to something more manageable.
    //
    // While it may seem highly subjective which is preferred, the using
    // directive provides a lot more freedom becuase it can be used with
    // templates, a C++ feature that is not discussed in detail in this course.
    // The declaration below is not taking advantage of this.
    using twoDIntArray = std::array<std::array<int, COLUMNS>, ROWS>;


    // We've seen array zero initialization, but for 2D an extra pair is needed
    // Remember that the compiler doesn't see a 2D array, but an array of
    // arrays. We need to think of this as an array with capacity of 4, where
    // each element is an array of ints of capacity 4. So the first set of
    // curly braces gets you the first element, which is a 1D array or ints,
    // and the second pair of curly braces gets you that array's first element,
    // an int. From there, the zero initialization can take place.
    int twoDCarray[ROWS][COLUMNS] = { { 0 } };

    // The third (outermost) set of braces is required to initialize the C++
    // std::array. See this stackoverflow answer for a diagram:
    // https://stackoverflow.com/a/12844625/6119582
    twoDIntArray twoDStdArray{ { { 0 } } };

    // i, j notation is extremely common for nested loops. i represents the row,
    // j the column
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            twoDCarray[i][j]   = i * COLUMNS + j + 1;
            twoDStdArray[i][j] = i * COLUMNS + j + 1;
        }
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            std::cout << std::setw(3) << twoDCarray[i][j];
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    for (auto& i : twoDStdArray) {
        for (auto& j : i) {
            std::cout << std::setw(3) << j;
        }
        std::cout << '\n';
    }

    return 0;
}
