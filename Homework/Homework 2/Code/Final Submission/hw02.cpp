/*
 * Morgan Bergen
 * B493R546
 * HW02
 * Program the game rock paper scissors such that you play against the CPU, who chooses values at random.
 * Play as many times as you like. Total games played and win count are tracked as long as the program is running.
 */


#include <iostream>
#include <random>

int main(){

    std::random_device rd;
    std::mt19937 opponent(rd());
    std::uniform_int_distribution<int>decision(0,2);
    std::string array [] = {"PAPER", "SCISSOR", "ROCK"};
    std::string opponentMove;
    std::string win = "You are victorious!\n\n";
    std::string lose = "You lose.\n\n";
    std::string tie = "It's a tie!\n\n";
    int choice;
    int gameSum = 0;
    int scoreSum = 0;
    
    for (int i = 0; i >= 0; i++) {
        std::cout << "\n*** Rock, Paper, Scissors ***\n"
                    << "Choose your fate: \n"
                    << "\t\t1. Paper\n"
                    << "\t\t2. Scissors\n"
                    << "\t\t3. Rock\n"
                    << "\t\t#. Quit (any other number)\n"
                    << "\nEnter the number of your choice: ";
        std::cin >> choice;
    
        if (choice == 1){
            std::cout << "\nYou chose PAPER.\n";
            
                opponentMove = array[decision(opponent)];
                for (int i = 0; i < 1; i++){
                    std::cout   << "Your opponent chose "
                                << opponentMove
                                << ".\n";
                }
            
                    if (opponentMove == "PAPER") {
                        std::cout << tie;
                    }
                    
                    else if (opponentMove == "ROCK") {
                        std::cout << win;
                    }
                    else {
                        std::cout << lose;
                    }
            gameSum = (gameSum + ((choice * 0) + 1));
        
            if (opponentMove == "ROCK") {
                int win = 1;
                scoreSum = (scoreSum + (win));
            } else {
                scoreSum = (scoreSum + (0));
            }
        }
        
        else if (choice == 2){
            std::cout << "\nYou chose SCISSOR.\n";
            
                opponentMove = array[decision(opponent)];
                for (int i = 0; i < 1; i++) {
                    std::cout   << "Your opponent chose "
                                << opponentMove
                                << ".\n";
                }
                
                    if (opponentMove == "PAPER") {
                        std::cout << win;
                    }
                    
                    else if (opponentMove == "SCISSOR") {
                        std::cout << tie;
                    }
                    else {
                        std::cout << lose;
                    }
            gameSum = (gameSum + ((choice * 0) + 1));
            
            if (opponentMove == "PAPER") {
                int win = 1;
                scoreSum = (scoreSum + (win));
            } else {
                scoreSum = (scoreSum + (0));
            }
        }
        else if (choice == 3){
            std::cout << "\nYou chose ROCK.\n";
            
                opponentMove = array[decision(opponent)];
                for (int i = 0; i < 1; i++) {
                    std::cout   << "Your opponent chose "
                                << opponentMove
                                << ".\n";
                }
                    if (opponentMove == "SCISSOR") {
                        std::cout << win;
                    }
                    
                    else if (opponentMove == "ROCK") {
                        std::cout << tie;
                    }
                    else {
                        std::cout << lose;
                    }
            gameSum = (gameSum + ((choice * 0) + 1));
            
            if (opponentMove == "SCISSOR") {
                int win = 1;
                scoreSum = (scoreSum + (win));
            } else {
                scoreSum = (scoreSum + (0));
            }
            
        }
        else {
            std::cerr   << "Thanks for playing!\n\n";
            gameSum = (gameSum + ((choice * 0) + 1));
            break;
        }
        
        if (gameSum == 1) {
            std::cout << "*** You have played " << gameSum << " game." << "\n";
        } else {
            std::cout << "*** You have played " << gameSum << " games." << "\n";
        }
        std::cout << "*** Your total score is " << scoreSum << ".\n";
    }
    return 0;
}

