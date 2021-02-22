/*
 * This file doesn't bother attempting proper money formatting. The principle
 * at play is how easy it is to understand the program by looking at the main
 * function.
 */

#include <iomanip>
#include <iostream>

/*
 * Prompts users for input and stores values in arguments
 *
 * Parameters:
 *  cost: Output parameter that stores the item's cost
 *  turnover: Output parameter that stores expected turnover in days
 */
void getInput(double& cost, int& turnover);

/*
 * Returns retail price based on shelf-life markup
 *
 * Parameters:
 *  cost: item cost
 *  turnover: expected turnover in days
 *
 * Return:
 *  The retail price with the proper markup based on shelf-life
 */
double calculatePrice(double cost, int turnover);


/*
 * Presents previously acquired inputs & calculated output
 *
 * Parameters:
 *  cost: wholesale price of item
 *  turnover; expected shelf life in days
 *  price: retail price
 */
void showOutput(double cost, int turnover, double price);

int main()
{
    double wholesalePrice;
    int    shelfLife;
    double retailPrice;

    getInput(wholesalePrice, shelfLife);
    retailPrice = calculatePrice(wholesalePrice, shelfLife);
    showOutput(wholesalePrice, shelfLife, retailPrice);

    return 0;
}

void getInput(double& cost, int& turnover)
{
    std::cout << "Enter the wholesale cost: $";
    std::cin >> cost;
    std::cout << "Enter the expected shelf life: ";
    std::cin >> turnover;

    return;
}

double calculatePrice(double cost, int turnover)
{
    if (turnover <= 5) {
        cost += (cost * 0.05);
    } else {
        cost += (cost * 0.1);
    }

    return cost;
}

void showOutput(double cost, int turnover, double price)
{
    std::cout << "With an expected shelf life of " << turnover
              << " days, the item originally costing $" << cost << " will be marked up to $"
              << price << '\n';
}