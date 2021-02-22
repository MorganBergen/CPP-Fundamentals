#include <iostream>
// Note that <cstring> is not necessary here

int main()
{
    char name[64];
    int  age;

    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore();  // Necessary when mixing std::cin and std::getline
    std::cout << "Name: ";
    std::cin.getline(name, sizeof(name) - 1);  // For use only with C-strings

    std::cout << "Hi " << name << ", "
              << "you are " << age << " and old.\n";

    return 0;
}