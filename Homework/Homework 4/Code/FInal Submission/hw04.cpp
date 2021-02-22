/*
 * Name: Morgan Bergen
 * WSU ID: B493R546
 * HW04
 *
 * Description: Simulate rolling a six-sided die 60,000 times and chart the results.
 * The program does not take any input
 * Roll the die 60,000 times and keep count of each roll
 * In order for the chart to fit easily on the screen, the chart will only show 1% of the totals
 * The two functions are required
 *   int roll_d6_die()
 *      Returns the result of a random roll of a six-sided die
 *   void print_rolls(int val, int rollNum, int onePercentOfTotalRolls)
 *       Takes as parameters the die face to print, total number of a roll, and the value to reduce by, i.e., 1% of the total rolls in this case
 *       The body of this function is only responsible for printing a single data row
 *      This function does NOT print the table header
 */

#include <iostream>
#include <random>

int roll_d6_die();
void print_rolls(int val, int amount, int onePercentOfTotalRolls);
const int rollNum = 60000;

int main() {

    int diceFace1 = 0;
    int diceFace2 = 0;
    int diceFace3 = 0;
    int diceFace4 = 0;
    int diceFace5 = 0;
    int diceFace6 = 0;
    
    for (int b = 0; b < rollNum; b++) {
        int rollAction = roll_d6_die();
        
        if (rollAction == 1) {
            ++diceFace1;
        }
        else if (rollAction == 2){
            ++diceFace2;
        }
        else if (rollAction == 3){
            ++diceFace3;
        }
        else if (rollAction == 4){
            ++diceFace4;
        }
        else if (rollAction == 5){
            ++diceFace5;
        }
        else if (rollAction == 6){
            ++diceFace6;
        }
    }
    
    std::cout   << "Distribution of dice rolls\n"
                << "==========================\n";
    print_rolls(1, diceFace1, 600);
    print_rolls(2, diceFace2, 600);
    print_rolls(3, diceFace3, 600);
    print_rolls(4, diceFace4, 600);
    print_rolls(5, diceFace5, 600);
    print_rolls(6, diceFace6, 600);
    
    return 0;
}

int roll_d6_die()
{
    static std::random_device rd;
    static std::mt19937 roll(rd());
    static std::uniform_int_distribution<int>d(1, 6);
    int val = d(roll);

    return val;
}

void print_rolls(int val, int amount, int onePercentOfTotalRolls)
{
    int starNum;
    starNum = amount / onePercentOfTotalRolls;
    
    std::cout << val << ": ";
    for (int a = 0; a < starNum; a++) {
        std::cout << '*';
    }
    std::cout << '\n';
}

