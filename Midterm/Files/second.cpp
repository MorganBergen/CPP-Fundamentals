#include <iostream>
#include <iomanip> //std::setw()
#include <cstdlib>
#include <ctime>
#include <array>
#include <random>

bool group2();
bool group3();
bool group4();
bool group5();

int user(int upperLimit);

int main(){
    
    int totalMatch2 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group2()) {
            totalMatch2 = totalMatch2 + 1;
        } else
            std::cout << '\0';
    }
    double group2 = static_cast<double>(totalMatch2)/100;
    
    std::cout << group2 << std::endl;
    
    int totalMatch3 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group3()) {
            totalMatch3 = totalMatch3 + 1;
        } else
            std::cout << '\0';
    }
    double group3 = static_cast<double>(totalMatch3)/100;
    
    std::cout << group3 << std::endl;
     
    int totalMatch4 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group4()) {
            totalMatch4 = totalMatch4 + 1;
        } else
            std::cout << '\0';
    }
    double group4 = static_cast<double>(totalMatch4)/100;
    
    std::cout << group4 << std::endl;
    
    int totalMatch5 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group5()) {
            totalMatch5 = totalMatch5 + 1;
        } else
            std::cout << '\0';
    }
    double group5 = static_cast<double>(totalMatch5)/100;
    
    std::cout << group5 << std::endl;

    return 0;
}


bool group2(){
    
    bool match1 = (user(365) == user(365));

    return (match1);
}

bool group3(){
    
    int a = user(365);
    int b = user(365);
    
    bool match3 = (a == b || a == b || a == b);
    
    return (match3);
}


bool group4(){

    bool match6 = (
                   
                   user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365)
                   
                   );
        
    return (match6);
}

bool group5(){
   
    bool match10 = (user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365) || user(365) == user(365));
    
    return (match10);
}



int user(int upperLimit)
{
  std::random_device rd;
  std::mt19937 generator(rd());
  std::uniform_int_distribution<int>day(1,upperLimit);

  return day(generator);
}



























/*
 

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


 Arrays
 
 int thing[4] = { 1, 2, 3, 4 };
 
 for (int i = 0; i < 4; ++i) {
     std::cout << thing[i] << std::endl;
 }
 
 int num = 0;
 
 for (int i = 0; i < 10; ++i){
     num = num + 1;
     std::cout << num << '\n';
 }
 */
