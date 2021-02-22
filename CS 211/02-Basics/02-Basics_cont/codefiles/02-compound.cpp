// Name
// WSUID
// HW #
// Description

#include <iostream>
#include <random>

int main(void)
{
    std::random_device entropy;            // Seed value for PRNG (Pseudo-Random Number Generator)
    std::mt19937       engine(entropy());  // PRNG
    std::uniform_int_distribution<int> dist(1, 100);

    int randomNum = dist(engine);
    std::cout << "Psst..." << randomNum << '\n';
    double bet;
    int    number;

    std::cout << "Feeling lucky? Place a bet: $";
    std::cin >> bet;
    std::cout << "Enter a number from 1 - 100: ";
    std::cin >> number;

    // THE IMPORTANT PART
    if (number == randomNum) {
        // Returns bet plus 20% if number guessed is correct
        std::cout << "You Win!\n";
        bet += (bet * 0.2);
    } else {
        // Takes users money because guess was wrong
        std::cout << "Tough luck! Try again next time...\n";
        bet = 0;
    }
    // /THE IMPORTANT PART
    std::cout << "You now have $" << bet << '\n';

    return 0;
}