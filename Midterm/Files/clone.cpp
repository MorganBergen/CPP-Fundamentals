/*
 Morgan Bergen
 B493R546
 exam01
 
 BACKGROUND
 Given a group of 'n' people, the odds that at least two peopple gave the same birthday are much higher than you would think.  An understanding of the mathmatics is not required.  This program requires running a simulation to show the math as being correct.
 
 REQUIREMENTS
 The program takes no input.
 The output must be formatted like that found in the sample run
 
 Assumptions we are making:
    There is an equal chance of birthday landing on any day of the year
    We are not considering a leap year (only 365 days)
 The simulation will be run in the following manner:
    For a group size of 2, assign a random birthday to each member.
    If the brithdays are identical, keep a count.
    Repeat 10,000 times
    Print a statement with formatting identical to that of the Sample Run
    Repeat the simulation for group sizes in the range [2, 50]
    For groups larger than 2, you only need to find a single match in order for it to count.
 
 */


#include <iostream>
#include <iomanip> //std::setw()
#include <cstdlib>
#include <ctime>
#include <array>
#include <random>

int main() {

    //This is to seed the Random Number
    srand((unsigned) time(0));
    int birthdayArray[50];

    //This loop will run through all groups from 2 to 50.
    for (int groupNum = 2; groupNum <= 50; groupNum++){
        int birthdayMatch = 0;

        //10,000 simulations/runs
        for(int simulation = 1; simulation <= 10000; simulation++){

            //filling the array with 0 before simulation
            std::fill_n(birthdayArray, 50, 0);

            bool found = false;

            // This will assign a birthday to groupNum of people
            for(int a = 0; a < groupNum; a++){

                //Randomally Assigning Birthdays
                birthdayArray[a] = 1 + (rand() % 365);

                //This will check if a birthday Exists within the Existing Array
                for(int b = 0; b < a; b++){
                    if(birthdayArray[a] == birthdayArray[b]){
                        found = true;
                        break;
                    }
                }
                if(found == true){
                    break;
                }
            }

            if(found == true){
                birthdayMatch++;

            }
        }
        
        double Percentage = (double)birthdayMatch*100/10000;
        
        std::cout << "Group size: " << std::setw(2) << groupNum << ", matching birthdays found " << std::setw(5) << Percentage << std::setw(1) << "% of the time." << std::endl;

    }
    return 0;
}
