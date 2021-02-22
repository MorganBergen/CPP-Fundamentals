#include <array>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <numeric>  // std::accumulate()
#include <random>

/*
 * Globals
 */
const int MAX_CAPACITY = 100;

/*
 * Functions
 */

/*
 * Fills the array with 'size' elements
 *
 * Parameters:
 *  arr: array to be filled
 *  size: number of elements to fill
 *
 * Return:
 *  N/A
 */
int fill_array(std::array<double, MAX_CAPACITY>& arr, int size);

/*
 * Shows the difference of an actual value from the mean of the set
 *
 * Parameters:
 *  arr: array containing grades as percentages, e.g., 75.4
 *
 * Return:
 *  N/A
 */
void show_differences(const std::array<double, MAX_CAPACITY>& arr, int size);

/*
 * Calcuates the mean of an array
 *
 * Parameters:
 *  arr: array containing values
 *  size: size of the array, i.e., active elements
 *
 * Return:
 *  The mean of all values of the array
 */
double calculate_mean(const std::array<double, MAX_CAPACITY>& arr, int size);

int main()
{
    int                              classSize;
    std::array<double, MAX_CAPACITY> grades;

    std::cout << "How large is your class? ";
    std::cin >> classSize;
    if (classSize > MAX_CAPACITY) {
        std::cerr << "Class size too large, setting to " << MAX_CAPACITY << ".\n";
        classSize = MAX_CAPACITY;
    }

    classSize = fill_array(grades, classSize);
    show_differences(grades, classSize);

    return 0;
}
int fill_array(std::array<double, MAX_CAPACITY>& arr, int size)
{
    int fillNum = arr.size() < static_cast<std::size_t>(size) ? arr.size() : size;  // Safety check

    // In case this function gets called many times, we don't want to
    // re-instantiate our random number generators every time; it performs
    // better when it's allowed to run and not getting rest every time. That's
    // what static gives us in this case.
    static std::random_device               rd;
    static std::mt19937                     prng(rd());
    static std::normal_distribution<double> dist(75, 10.0);  // (mean, std. deviation)

    // Range-based for always operates on the entire array; we don't want that
    for (int i = 0; i < fillNum; ++i) {
        arr[i] = dist(prng);
    }

    return fillNum;
}

void show_differences(const std::array<double, MAX_CAPACITY>& arr, int size)
{
    double mean = calculate_mean(arr, size);

    for (int i = 0; i < size; ++i) {
        std::cout << (arr[i] - mean) << ' ';
        if ((i + 1) % 10 == 0) {
            std::cout << '\n';
        }
    }
}

double calculate_mean(const std::array<double, MAX_CAPACITY>& arr, int size)
{
    return std::accumulate(arr.begin(), arr.begin() + size - 1, 0.0,
                           [size](double mean, double val) {
                               return mean + (val / static_cast<double>(size));
                           });
}
