/*
 * This program does not compile in its current state. Swap the calculate_mean()
 * functions to compile the program. It does not compile because the first
 * calculate_mean() does not take its reference to an array as const. We are
 * passing the array as a reference because there's no point in sending copies
 * everywhere.
 */

#include <array>
#include <iostream>
#include <numeric>  // std::accumulate()
#include <random>

/*
 * Globals
 */
const int CLASS_SIZE = 50;

/*
 * Shows the difference of an actual value from the mean of the set
 *
 * Parameters:
 *  arr: array containing grades as percentages, e.g., 75.4
 *
 * Return:
 *  N/A
 */
void show_differences(const std::array<double, CLASS_SIZE>& arr);

/*
 * Calcuates the mean of an array
 *
 * Parameters:
 *  arr: array containing values
 *  size: size of the array
 *
 * Return:
 *  The mean of all values of the array
 */
// double calculate_mean(std::array<double, CLASS_SIZE>& arr);  // WILL NOT COMPILE
double calculate_mean(const std::array<double, CLASS_SIZE>& arr);  // Will compile

int main()
{
    std::random_device               rd;
    std::mt19937                     prng(rd());
    std::normal_distribution<double> dist(75, 10.0);  // (mean, std. deviation)

    std::array<double, CLASS_SIZE> grades;
    for (auto& i : grades) {
        i = dist(prng);
    }

    show_differences(grades);

    return 0;
}

void show_differences(const std::array<double, CLASS_SIZE>& arr)
{
    double mean = calculate_mean(arr);
    std::cout << "Manual mean: " << mean << '\n';

    // A std::array knows its size, through the size() member function
    // Again, a traditional for loop is better than a range-based for, since I
    // am doing a calculation based on the index.
    // std::size_t is the return type of std::array's size() function. It is an
    // unsigned integer type.
    for (std::size_t i = 0; i < arr.size(); ++i) {
        std::cout << (arr[i] - mean) << ' ';
        if ((i + 1) % 10 == 0) {
            std::cout << '\n';
        }
    }
}

double calculate_mean(std::array<double, CLASS_SIZE>& arr)
{
    double sum = 0.0;

    for (auto i : arr) {
        sum += i;
    }

    return sum / static_cast<double>(arr.size());
}

double calculate_mean(const std::array<double, CLASS_SIZE>& arr)
{
    /* Body 1
     * Again, std::array has iterators, and iterators are a big part of using
     * Standard Library functions. At it's core, std::accumulate() can sum all
     * elements. The first two arguments specify the range, the third parameter
     * is the starting value.
     */
    double sum = std::accumulate(arr.begin(), arr.end(), 0.0);

    return sum / static_cast<double>(arr.size());

    /* Body 2, a.k.a, Getting fancy with the spices
     * std::accumulate() can be used to calculate the mean directly, making this
     * function a 'one-liner'. std::accumulate an take a fourth argument, which
     * is a function to apply. In this case, a lambda (functor, function object)
     * has been used. Lambdas are not covered in this course. I felt that if I
     * was going to showcase std::accumulate, I shold at least demonstrate its
     * potential.
     */
    // return std::accumulate(arr.begin(), arr.end(), 0.0,
    //                               [size = arr.size()](double mean, double val) {
    //                                   return mean + (val / static_cast<double>(size));
    //                               });
}