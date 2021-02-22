#include <iostream>
#include <string>

int main()
{
    std::string name;
    int         age;

    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore();  // Necessary when mixing std::cin and std::getline
    std::cout << "Name: ";
    std::getline(std::cin, name);  // For use only with string class

    std::cout << "Hi " << name << ", "
              << "you are " << age << " and old.\n";

    return 0;
}