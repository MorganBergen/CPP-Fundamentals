#include <iostream>

using namespace std;

int main()
{
    double a = 3.1415926534;
    double b = 2017.0;
    double c = 1.0e-10;  // Same as 1x10^(-10)

    cout.precision(5);

    // With the exception of the precision, this is how cout would output the numbers normally
    cout << "Default output:\n";
    cout << a << "\n" << b << "\n" << c << "\n";

    // Fixed means we never see scientific output
    cout << "\nFixed Output:\n";
    cout.setf(ios::fixed, ios::floatfield);  // Ignore the second parameter, it is required
    cout.setf(ios::showpoint);  // Show decimal	   for this program to ensure the switch to
    cout.setf(ios::showpos);    // Show '+'		   scientific output works
    cout << a << "\n" << b << "\n" << c << "\n";

    // scientific will show all numbers in scientific notation
    cout << "\nScientific Output:\n";
    cout.setf(ios::scientific, ios::floatfield);
    // No need to set showpoint, it is still set
    cout.unsetf(ios::showpos);
    cout << a << "\n" << b << "\n" << c << "\n";

    return 0;
}
