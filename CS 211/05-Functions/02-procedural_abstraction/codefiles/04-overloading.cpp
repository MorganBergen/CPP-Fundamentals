#include <iostream>

/*
 * Finds maximum of two integers
 *
 * Parameters:
 *  a, b: numbers to compare
 *
 * Return:
 *  Maximum value
 */
int find_max(int a, int b)
{
    return a > b ? a : b;
}

/*
 * Finds maximum of three integers
 *
 * Parameters:
 *  a, b, c: numbers tot compare
 *
 * Return:
 *  Maximum value
 */
int find_max(int a, int b, int c)
{
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}

/*
 * Finds maximum of two doubles
 *
 * Parameters:
 *  a, b: numbers to compare
 *
 * Return:
 *  Maximum value
 */
double find_max(double a, double b)
{
    return a > b ? a : b;
}

int main()
{
    std::cout << find_max(5, 7) << '\n' << find_max(3, 9, 7) << '\n' << find_max(3.14, 3.4) << '\n';

    return 0;
}