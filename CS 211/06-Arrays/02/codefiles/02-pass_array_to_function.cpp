
#include <array>
#include <iomanip>
#include <iostream>

/*
 * Globals
 */
const int SIZE = 20;  // This is now global for the sake of the functions.
                      // Opinion time, this is not great. There are better ways
                      // to go about this, but they are beyond the scope of 211.

/*
 * Returns 2x
 *
 * Parameter:
 *  x: an integer to be doubled
 *
 * Return:
 *  2x
 */
int double_value(int x);

/*
 * Prints array using std::cout
 *
 * Parameters:
 *  arr: an array of integers to be printed
 *
 * Return:
 *  N/A
 */
void print_array(std::array<int, SIZE>);

int main()
{
    std::array<int, SIZE> arr;

    // Initialize array with values 1 - SIZE
    // In a range-based for, you lose the index value; I want the index value
    // for this initialization. I could do the same thing with a range-based
    // for, but it would require an extra variable that lives outside the loop.
    // A traditional for loop is just cleaner.
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = i + 1;
    }
    print_array(arr);

    // Double value of every element
    // By default, a range-based for uses copies. auto& takes a reference.
    for (auto& i : arr) {
        i = double_value(i);
    }
    print_array(arr);

    return 0;
}

int double_value(int x)
{
    return 2 * x;
}

void print_array(std::array<int, SIZE> arr)
{
    for (auto i : arr) {
        std::cout << std::setw(3) << i << ' ';
    }
    std::cout << '\n';
}
