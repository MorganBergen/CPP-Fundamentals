#include <iomanip>
#include <iostream>  // No special library needed for pointers

int main()
{
    double  pi  = 3.14159;
    double* ptr = &pi;

    char prev = std::cout.fill('.');

    // This first part of the code illustrates where variables live, and the values they hold
    std::cout << std::setw(25) << std::left << "Address of pi" << &pi << '\n';
    std::cout << std::setw(25) << std::left << "Value of pi" << pi << '\n' << '\n';

    std::cout << std::setw(25) << std::left << "Address of ptr" << &ptr << '\n';
    std::cout << std::setw(25) << std::left << "Value of ptr" << ptr << '\n';
    std::cout << std::setw(25) << std::left << "De-referencing ptr" << *ptr << '\n' << '\n';

    // This section illustrates how we can use pointers to manipulate variables and vice-versa
    std::cout << "--- Changing the value through the pointer\n";
    *ptr = 7.2479;
    std::cout << std::setw(25) << std::left << "Address of pi" << &pi << '\n';
    std::cout << std::setw(25) << std::left << "Value of pi" << pi << '\n' << '\n';

    std::cout << "--- Changing it back via the original variable\n";
    pi = 3.14159;
    std::cout << std::setw(25) << std::left << "Address of ptr" << &ptr << '\n';
    std::cout << std::setw(25) << std::left << "Value of ptr" << ptr << '\n';
    std::cout << std::setw(25) << std::left << "De-referencing ptr" << *ptr << '\n' << '\n';

    // This section shows how dynamic variables can be used
    std::cout << "--- Dynamic Pointer\n";
    double* dynPtr = new double(5.892);

    std::cout << std::setw(25) << std::left << "Address of dynPtr" << &dynPtr << '\n';
    std::cout << std::setw(25) << std::left << "Value of dynPtr" << dynPtr << '\n';
    std::cout << std::setw(25) << std::left << "De-referencing dynPtr" << *dynPtr << '\n' << '\n';

    delete dynPtr;     // Give dynamically allocated memory back to the heap
    dynPtr = nullptr;  // null pointer to remove dangling pointer value

    std::cout.fill(prev);

    return 0;
}