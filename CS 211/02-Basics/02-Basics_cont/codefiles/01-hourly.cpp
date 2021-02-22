#include <iostream>

int main()
{
    double grossPay;
    int    hoursWorked;
    double hourlyRate;

    std::cout << "Enter the hourly rate: $";
    std::cin >> hourlyRate;
    std::cout << "Enter hours worked (rounded to nearest hour): ";
    std::cin >> hoursWorked;

    // THE PART WE CARE ABOUT
    if (hoursWorked < 40) {
        grossPay = hoursWorked * hourlyRate;
    } else {
        grossPay = 40 * hourlyRate + hourlyRate * 1.5 * (hoursWorked - 40);
    }
    // /THE PART WE CARE ABOUT

    std::cout << "Gross pay: $" << grossPay << '\n';

    return 0;
}