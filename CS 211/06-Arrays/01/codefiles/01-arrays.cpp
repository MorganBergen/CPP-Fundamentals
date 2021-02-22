#include <iostream>

int main()
{
    char grades[5] = { 'A', 'C', 'A', 'B', 'F' };

    for (int i = 0; i < 5; i++) {
        std::cout << grades[i] << '\n';
    }

    const int BIG_SIZE = 789;
    // constexpr int BIG_SIZE = 789;  // Generally better once you're writing
    //                                // more modern C++. I will continue to use
    //                                // const for consistency's sake
    double big[BIG_SIZE];

    for (int i = 0; i < BIG_SIZE; ++i) {
        big[i] = 100.0;
    }

    return 0;
}