/*
* Morgan Bergen
* B493R546
* HW01
*
* The program will prompt you to enter quantities of coins and tell you how much money you have.
* The program is only required to work if the numbers entered by the user are zero or positive integers.
*   If a negative number is entered, the user must be presented with an error message,
*   and that input will be treated as a zero.
*   Error messages should be printed to the error stream using std::cerr
*/

#include <iostream>
#include <thread>
#include <chrono>

int main (){
    
    int q;
    int qsum;
    int d;
    int dsum;
    int n;
    int nsum;
    int p;
    int psum;
    
    do {
         std::cout << "Please enter the number of\n";
           std::cout << "\tQuarters: ";
           std::cin >> q;
           
               if (q < 0) {
                   qsum = 0;
                   std::cerr << "Negative quarters treated like 0.\n";
               } else {
                   qsum = (q*25);
               }
           
           std::cout << "\tDimes: ";
           std::cin >> d;
              
              if (d < 0) {
                  dsum = 0;
                  std::cerr << "Negative dimes treated like 0.\n";
              } else {
                  dsum = (d*10);
              }
           
           std::cout << "\tNickels: ";
           std::cin >> n;
           
               if (n < 0) {
                   nsum = 0;
                   std::cerr << "Negative nickels treated like 0.\n";
               } else {
                   nsum = (n*5);
               }
           
           std::cout << "\tPennies: ";
           std::cin >> p;
           
           if (p < 0) {
               psum = 0;
               std::cerr << "Negative pennies treated like 0.\n";
           } else {
               psum = (p*1);
           }
           
           std::cout << "You have " << qsum + dsum + nsum + psum << " cents.\n\n";
    } while ((qsum + dsum + nsum + psum) > -1);
    
    return 0;
}
