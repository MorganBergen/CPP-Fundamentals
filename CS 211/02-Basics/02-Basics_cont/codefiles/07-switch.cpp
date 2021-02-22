#include <iostream>

int main()
{
    char grade;
    std::cout << "Enter your midterm grade: ";
    std::cin >> grade;

    switch (grade) {
    case 'A':
        std::cout << "Excellent! No need to take the final.\n";
        break;
    case 'B':
        std::cout << "Very good. Your midterm grade is " << grade << '\n';
        break;
    case 'C':
        std::cout << "Passing.\n";
        break;
    case 'D':
    case 'F':
        std::cout << "Not good. Go study.\n";
        break;
    default:
        std::cout << "That is not a valid grade.\n";
    }

    std::cout << "\n\nRunning evaulation again using if-else\n\n\n";

    if (grade == 'A') {
        std::cout << "Excellent! No need to take the final.\n\n";
    } else if (grade == 'B') {
        std::cout << "Very good. Your midterm grade is " << grade << '\n';
    } else if (grade == 'C') {
        std::cout << "Passing.\n";
    } else if (grade == 'D' || grade == 'F') {
        std::cout << "Not good. Go study.\n";
    } else {
        std::cout << "That is not a valid grade.\n";
    }

    return 0;
}
