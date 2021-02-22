/*
 * This program does not compile in its current state. Swap the calculate_mean()
 * functions to compile the program. It does not compile because
 * calculate_mean() does not take its array as const. The int parameter does not
 * have to be const in order for the program to compile. That's because a copy
 * is sent to the function. The compiler recognizes the 'like a reference' way
 * that arrays are passed around and makes sure that the const in
 * show_differences() is enforced.
 */

#include <iostream>
#include <random>

/*
 * Shows the difference of an actual value from the mean of the set
 *
 * Parameters:
 *  arr: array containing grades as percentages, e.g., 75.4
 *  size: size of the array
 *
 * Return:
 *  N/A
 */
void show_differences(const double arr[], const int size);

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
//double calculate_mean(double arr[], int size);  // WILL NOT COMPILE
 double calculate_mean(const double arr[], const int size);  // Will compile

int main()
{
    std::random_device               rd;
    std::mt19937                     prng(rd());
    std::normal_distribution<double> dist(75, 10.0);  // (mean, std. deviation)
    const int                        CLASS_SIZE = 50;

    double grades[CLASS_SIZE];
    for (auto& i : grades) {
        i = dist(prng);
    }

    show_differences(grades, CLASS_SIZE);
}

void show_differences(const double arr[], const int size)
{
    double mean = calculate_mean(arr, size);

    for (int i = 0; i < size; ++i) {
        std::cout << (arr[i] - mean) << ' ';
        if ((i + 1) % 10 == 0) {
            std::cout << '\n';
        }
    }
}
/*
double calculate_mean(double arr[], int size)
{
    double sum = 0.0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / static_cast<double>(size);
}*/

 double calculate_mean(const double arr[], const int size)
 {
     double sum = 0.0;

     for (int i = 0; i < size; ++i) {
         sum += arr[i];
     }

     return sum / static_cast<double>(size);
 }
