#include <iomanip>
#include <iostream>

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
 *  cap: capacity of the array
 *
 * Return:
 *  N/A
 */
void print_array(int arr[], int cap);

int main()
{
    const int SIZE = 20;
    int       arr[SIZE];

    // Initialize array with values [1, SIZE]
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = i + 1;
    }
    print_array(arr, SIZE);  // Passing an array to a function, with its size

    // Double value of every element
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = double_value(arr[i]);  // An element of arr is an int
    }
    print_array(arr, SIZE);

    return 0;
}

int double_value(int x)
{
    return 2 * x;
}

void print_array(int arr[], int cap)
{
    for (int i = 0; i < cap; ++i) {
        std::cout << std::setw(3) << arr[i] << ' ';
    }
    std::cout << '\n';
}
