/*
 * Morgan Bergen
 * B493R546
 * lab05
 *
 * Name your file lab05.cpp.
 * Declare an array of size 10, of type int. It will be filled with even numbers [2, 20].
 * Print the array to the screen.
 */

#include <iostream>

int main(){
    
    int arr[10];
    int num = 0;
    for (int i = 0; i < 10; ++i){
        arr[i] = num;
        num += 2;
        std::cout << num << '\n';
    }

    return 0;
}
