/*
 * There's actually enough complexity in this that I'd much rather prefer to
 * bring some classes into the mix. This can be seen
 */

#include <cctype>   // tolower()
#include <iomanip>  // std::put_money()
#include <iostream>
#include <locale>

/*
 * Calculates the price per square inch of a circular pizza
 *
 * Parameters:
 *   diameter: pizza diameter in inches
 *   price: price of pizza
 *
 * Return:
 *   Price per square inch of the pizza
 */
double calculatePricePerArea(int diameter, double price);

/*
 * Calculates the price per square inch of a rectangular pizza
 *
 * Parameters:
 *   length: pizza length in inches
 *   width: pizza width in inches
 *   price: price of pizza
 *
 * Return:
 *   Price per square inch of the pizza
 */
double calculatePricePerArea(int length, int width, double price);

/*
 * Asks user about pizza information, and runs the calculations
 *
 * Parameters:
 *   N/A
 *
 * Return:
 *   Price per square inch of the pizza entered by the user
 */
double pizzaPromptAndCalculate();

int main()
{
    double firstPPSI  = pizzaPromptAndCalculate();
    double secondPPSI = pizzaPromptAndCalculate();

    // Which pizza is the better buy?
    // Compare the price per square inch, want greater value
    std::cout.imbue(std::locale("en_US.UTF-8"));
    if (firstPPSI < secondPPSI) {
        std::cout << "At $" << std::put_money(firstPPSI)
                  << " per square inch, the first pizza is cheaper.\n";
    } else {
        std::cout << "At $" << std::put_money(secondPPSI)
                  << " per square inch, the second pizza is cheaper.\n";
    }


    return 0;
}

double calculatePricePerArea(int diameter, double price)
{
    const double PI   = 3.14159;
    double       area = PI * static_cast<double>(diameter) / 2 * static_cast<double>(diameter) / 2;

    return price / area;
}

double calculatePricePerArea(int length, int width, double price)
{
    return price / static_cast<double>(length * width);
}

double pizzaPromptAndCalculate()
{
    char   shape;
    double pricePerArea = 0.0;
    double price;

    do {
        std::cout << "Is the pizza round or square? (r/s) ";
        std::cin >> shape;

        shape = std::tolower(shape);
        switch (shape) {
        case 'r':
            int diameter;
            std::cout << "Enter the diameter: ";
            std::cin >> diameter;
            std::cout << "Enter the price: ";
            std::cin >> price;
            pricePerArea = calculatePricePerArea(diameter, price);
            break;
        case 's':
            int length;
            int width;
            std::cout << "Enter the length: ";
            std::cin >> length;
            std::cout << "Enter the width: ";
            std::cin >> width;
            std::cout << "Enter the price: ";
            std::cin >> price;
            pricePerArea = calculatePricePerArea(length, width, price);
            break;
        default:
            std::cerr << "Invalid entry. Please try again...\n";
        }
    } while (shape != 'r' && shape != 's');

    return pricePerArea;
}