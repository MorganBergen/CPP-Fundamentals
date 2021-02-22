#include <iostream>
#include <random>

int main(){
    
    const int PAPER = 1;
    const int SCISSOR = 2;
    const int ROCK = 3;
    
    std::random_devie                   rd;
    std::mt19937                        prng(rd());
    std::uniform_int_distribution<int>  pcOption(1, 3);
    
    int playerChoice;
    int playerScore = 0;
    int totalPlays  = 0;
    
    std::cout << "*** Rock, Paper, Scissors ***\n";
    do {
        // clange-format off
        
        std::cout << "Choose your fate:\n"
                  << "\t1. Paper\n"
                  << "\t2.  Scissor\n"
                  << "\t3. Rock\n"
                  << "\t#. Quit (any other number)\n\n"
                  << "Enter the number of your choice: ";
        
        std::cin >> playerChoice;
        
        switch (<#expression#>) {
            case <#constant#>:
                <#statements#>
                break;
                
            default:
                break;
        }
        int pcChoice = pcOption(prng);
        bool playerWon = false;
        bool tieGame = false;
        
        std::cout << "Your opponent chose ";
        switch (pcChoice) {
            case PAPER:
                std::cout << "PAPER.\n";
                break;
            case SCISSOR:
                std::cout << "SCISSOR.\n";
                break;
            case ROCK:
                std::cout << "ROCK. \n";
                break;
                
            default:
                break;
        }
        
        if (playerChoice == pcChoice) {
            tieGame = true;
        } else if ((playerChoice == PAPER && pcChoice == ROCK) ||
                   (playerChoice == SCISSOR && pcChoice == PAPER)
                   playerChoice == ROCK && pcChoice == SCISSOR)){
            
        }
    }
}
