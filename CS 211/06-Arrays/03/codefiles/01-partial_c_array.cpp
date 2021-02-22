#include <array>
#include <iostream>
#include <numeric>  // std::accumulate()
#include <random>

/*** Functions ***/
/*
 * Fills the array with 'size' elements
 *
 * Parameters:
 *  arr: array to be filled
 *  size: number of elements to fill
 *  capacity: capacity of arr
 *
 * Return:
 *  N/A
 */
void fill_array(double arr[], int size, int capacity);

/*
 * Shows the difference of an actual value from the mean of the set
 *
 * Parameters:
 *  arr: array containing grades as percentages, e.g., 75.4
 *
 * Return:
 *  N/A
 */
void show_differences(const double arr[], int size);

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
double calculate_mean(const double arr[], int size);

int main()
{
    const int MAX_CAPACITY = 100;
    int       classSize;
    double    grades[MAX_CAPACITY];

    std::cout << "How large is your class? ";
    std::cin >> classSize;
    if (classSize > MAX_CAPACITY) {
        std::cerr << "Class size too large, setting to " << MAX_CAPACITY << ".\n";
        classSize = MAX_CAPACITY;
    }

    fill_array(grades, classSize, MAX_CAPACITY);
    show_differences(grades, classSize);

    return 0;
}

void fill_array(double arr[], int size, int capacity)
{
    int fillNum = capacity < size ? capacity : size;  // Safety check

    // In case this function gets called many times, we don't want to
    // re-instantiate our random number generators every time; it performs
    // better when it's allowed to run and not getting reset every time. That's
    // what static gives us in this case.
    static std::random_device               rd;
    static std::mt19937                     prng(rd());
    static std::normal_distribution<double> dist(75, 10.0);  // (mean, std. deviation)

    for (int i = 0; i < fillNum; ++i) {
        arr[i] = dist(prng);
    }
}

void show_differences(const double arr[], int size)
{
    double mean = calculate_mean(arr, size);

    for (int i = 0; i < size; ++i) {
        std::cout << (arr[i] - mean) << ' ';
        if ((i + 1) % 10 == 0) {
            std::cout << '\n';
        }
    }
}

double calculate_mean(const double arr[], int size)
{
    double sum = 0.0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / static_cast<double>(size);
}