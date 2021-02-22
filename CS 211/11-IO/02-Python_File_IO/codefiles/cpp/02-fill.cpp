#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    char oldFill = cout.fill('.');  // The function fill returns the previous fill character
    cout << "Adam Sweeney" << setw(25) << "(555)555-5555";
    cout << endl;

    cout.fill('#');
    cout << "Adam Sweeney" << setw(25) << "(555)555-5555";
    cout << endl;

    cout.fill('*');
    cout << "Adam Sweeney" << setw(25) << "(555)555-5555";
    cout << endl;

    cout.fill('^');
    cout << "Adam Sweeney" << setw(25) << "(555)555-5555";
    cout << endl;

    cout.fill(oldFill);  // Resetting fill back to the default
    cout << "Adam Sweeney" << setw(25) << "(555)555-5555";
    cout << endl;

    return 0;
}
