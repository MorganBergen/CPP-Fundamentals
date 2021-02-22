#include <cassert>
#include <cmath>
#include <iostream>

// Uncomment next line to disable asserts
// #define NDEBUG

/*
 * Uses Newton's method to calculate a square root
 *
 * Parameters:
 *  n: value of which the square root is desired; must be positive
 *  maxIterations: The maximum number of times to try; must be positive
 *
 * Return:
 *  The approximate square root of n
 */
double calcNewtonSqrt(double n, int maxIterations)
{
    double answer = 1;
    int    i      = 0;

    assert((n > 0) && (maxIterations > 0));

    while (i < maxIterations) {
        double oldAnswer = answer;
        answer           = 0.5 * (answer + (n / answer));
        if (std::abs(oldAnswer - answer) <= 0.0001) {
            break;
        }
        i++;
    }

    return answer;
}

int main()
{
    double num;

    std::cout << "Number: ";
    std::cin >> num;

    std::cout << "Square root of " << num << ": " << calcNewtonSqrt(num, 100) << '\n';

    return 0;
}
