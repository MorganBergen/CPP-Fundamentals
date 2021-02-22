/*
 * Name:
 * WSUID:
 * HW:
 * DESCRIPTION:
 */

#include <iostream>

int main()
{
    int choice;
    std::cout << "Enter a number (1 - 4): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "One\n";
    } else if (choice == 2) {
        std::cout << "Two\n";
    } else if (choice == 3) {
        std::cout << "Three\n";
    } else if (choice == 4) {
        std::cout << "Four\n";
    } else {
        std::cout << "Bad Entry\n";
    }

    return 0;
}