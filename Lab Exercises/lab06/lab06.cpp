/*
 * Morgan Bergen
 * B493R546
 * lab06
 *
 * Declare an array of integers with a capacity of 20.
 * Ask the user for a number between 1 and 20 (Enforce a valid number)
 * Fill the array with random integers in the range 1 - 100, and print it to the screen.
 * Printing the array should occur in a function.
 */

#include <array>
#include <iostream>
#include <numeric>
#include <random>

void fill_array ();

int main(){
    
    const int capacity = 20;
    int userNum;
    int num[capacity];
    
    static std::random_device rd;
    static std::mt19937 generator(rd());
    static std::uniform_int_distribution<int>uniDist(1, 100);
    
    std::cout << "Please enter any number between 1 and 20: ";
    std::cin >> userNum;
    if (userNum <= capacity) {
        fill_array();
    } else {
        std::cerr << "invalid entry" << std::endl;
        userNum = num[0];
    }
    
    return 0;
}

void fill_array (){
    
    int arr[100];
    
    static std::random_device rd;
    static std::mt19937 generator(rd());
    static std::uniform_int_distribution<int>uniDist(1, 100);
    
    
    for (int i = 0; i <= 100; ++i){
        arr[i] = uniDist(generator);
        std::cout << arr[i] << " ";
    }
    
    std::cout << '\n';
    
}
