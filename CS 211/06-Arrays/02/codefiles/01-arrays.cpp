#include <algorithm>  // std::fill()
#include <array>      // C++ arrays
#include <iostream>

int main()
{
    // Size will always be required when declaring a std::array
    std::array<char, 5> grades{ 'A', 'C', 'A', 'B', 'F' };

    // Range-based for also works for C-arrays, but because of decay, it's
    // safer to always use a traditional for loop. With std::array, range-based
    // for will always work.
    for (auto i : grades) {
        std::cout << i << '\n';
    }

    const int BIG_SIZE = 789;
    // constexpr int BIG_SIZE = 789;  // Generally better once you're writing
    //                                // more modern C++. I will continue to use
    //                                // const for consistency's sake
    std::array<double, BIG_SIZE> big;

    // If we're going to be using std::array, it starts behooving us to take
    // advantage of the C++ Standard Library. std::fill will copy-initialize
    // the specified elements of ANY data structure, for the range provided.
    // Here we provide begin() and end(), or the whole array, as the range.
    // The functions begin() and end() return iterators, and these iterators
    // are one of the biggest advantages of using std::array over a C-array.
    std::fill(big.begin(), big.end(), 100.0);


    return 0;
}