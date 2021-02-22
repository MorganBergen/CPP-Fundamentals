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

/*
 Reference 03-09.cpp for help
 */

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
bool group6();
bool group7();
bool group8();
bool group9();
bool group10();
bool group11();
bool group12();
bool group13();
bool group14();

int user(int upperLimit);

int main(){

    
    
    // Group 2 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch2 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group2()) {
            totalMatch2 = totalMatch2 + 1;
        } else
            std::cout << '\0';
    }
    double group2 = static_cast<double>(totalMatch2)/100;
    // Group 2 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 3 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch3 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group3()) {
            totalMatch3 = totalMatch3 + 1;
        } else
            std::cout << '\0';
    }
    double group3 = static_cast<double>(totalMatch3)/100;
    // Group 3 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 4 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch4 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group4()) {
            totalMatch4 = totalMatch4 + 1;
        } else
            std::cout << '\0';
    }
    double group4 = static_cast<double>(totalMatch4)/100;
    // Group 4 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 5 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch5 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group5()) {
            totalMatch5 = totalMatch5 + 1;
        } else
            std::cout << '\0';
    }
    double group5 = static_cast<double>(totalMatch5)/100;
    // Group 5 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 6 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch6 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group6()) {
            totalMatch6 = totalMatch6 + 1;
        } else
            std::cout << '\0';
    }
    double group6 = static_cast<double>(totalMatch6)/100;
    // Group 6 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 7 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch7 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group7()) {
            totalMatch7 = totalMatch7 + 1;
        } else
            std::cout << '\0';
    }
    double group7 = static_cast<double>(totalMatch7)/100;
    // Group 7 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 8 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch8 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group8()) {
            totalMatch8 = totalMatch8 + 1;
        } else
            std::cout << '\0';
    }
    double group8 = static_cast<double>(totalMatch8)/100;
    // Group 8 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 9 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch9 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group9()) {
            totalMatch9 = totalMatch9 + 1;
        } else
            std::cout << '\0';
    }
    double group9 = static_cast<double>(totalMatch9)/100;
    // Group 9 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 10 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch10 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group10()) {
            totalMatch10 = totalMatch10 + 1;
        } else
            std::cout << '\0';
    }
    double group10 = static_cast<double>(totalMatch10)/100;
    // Group 10 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 11 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch11 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group11()) {
            totalMatch11 = totalMatch11 + 1;
        } else
            std::cout << '\0';
    }
    double group11 = static_cast<double>(totalMatch11)/100;
    // Group 11 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 12 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch12 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group12()) {
            totalMatch12 = totalMatch12 + 1;
        } else
            std::cout << '\0';
    }
    double group12 = static_cast<double>(totalMatch12)/100;
    // Group 12 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 13 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch13 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group13()) {
            totalMatch13 = totalMatch13 + 1;
        } else
            std::cout << '\0';
    }
    double group13 = static_cast<double>(totalMatch13)/100;
    // Group 13 end /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    // Group 14 start /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int totalMatch14 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group14()) {
            totalMatch14 = totalMatch14 + 1;
        } else
            std::cout << '\0';
    }
    double group14 = static_cast<double>(totalMatch14)/100;
    
    
    
    
    
    double allGroups[] = { group2, group3, group4, group5, group6, group7, group8, group9, group10, group11, group12, group13, group14 };
    int num = 1;
    
    for (int i = 0; i < 13; ++i) {
        num = num + 1;
        std::cout << "Group size: " << std::setw(2) << num << ", matching birthdays found " << std::setw(5) << allGroups[i] << std::setw(1) << "% of the time." << std::endl;
    }
    
    
    
    
    
    return 0;
}

bool group2(){
    int a = user(365);
    int b = user(365);
    return (a == b);
}

bool group3(){
    int a = user(365);
    int b = user(365);
    int c = user(365);
    return (a == b || a == c || b == c);
}

bool group4(){
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    return (a == b || a == c || a == d || b == c || b == d || c == d);
}

bool group5(){
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    return (
            
            a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e
            
            );
}

bool group6(){
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    int f = user(365);
    return (
            
            a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e || f == a || f == b || f == c || f == d || f == e
            
            );
}

bool group7(){
    
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    int f = user(365);
    int g = user(365);
   
    return (
            
            a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e || f == a || f == b || f == c || f == d || f == e ||
            g == a || g == b || g == c || g == d || g == e || g == f
            
            );
}

bool group8(){
    
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    int f = user(365);
    int g = user(365);
    int h = user(365);
   
    return (
            
            a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e || f == a || f == b || f == c || f == d || f == e ||
            g == a || g == b || g == c || g == d || g == e || g == f ||
            h == a || h == b || h == c || h == d || h == e || h == f || h == g
            
            );
}

bool group9(){
    
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    int f = user(365);
    int g = user(365);
    int h = user(365);
    int i = user(365);
   
    return (
            
            a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e || f == a || f == b || f == c || f == d || f == e ||
            g == a || g == b || g == c || g == d || g == e || g == f ||
            h == a || h == b || h == c || h == d || h == e || h == f || h == g ||
            i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h
            
            );
}

bool group10(){
    
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    int f = user(365);
    int g = user(365);
    int h = user(365);
    int i = user(365);
    int j = user(365);
   
    return (
            
            a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e || f == a || f == b || f == c || f == d || f == e ||
            g == a || g == b || g == c || g == d || g == e || g == f ||
            h == a || h == b || h == c || h == d || h == e || h == f || h == g ||
            i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h ||
            j == a || j == b || j == c || j == d || j == e || j == f || j == g || j == h || j == i
            
            );
}

bool group11(){
    
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    int f = user(365);
    int g = user(365);
    int h = user(365);
    int i = user(365);
    int j = user(365);
    int k = user(365);
   
    return (
            
            a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e || f == a || f == b || f == c || f == d || f == e ||
            g == a || g == b || g == c || g == d || g == e || g == f ||
            h == a || h == b || h == c || h == d || h == e || h == f || h == g ||
            i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h ||
            j == a || j == b || j == c || j == d || j == e || j == f || j == g || j == h || j == i ||
            k == a || k == b || k == c || k == d || k == e || k == f || k == g || k == h || k == i || k == j
            
            );
}

bool group12(){
    
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    int f = user(365);
    int g = user(365);
    int h = user(365);
    int i = user(365);
    int j = user(365);
    int k = user(365);
    int l = user(365);
   
    return (
            
            a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e ||
            f == a || f == b || f == c || f == d || f == e ||
            g == a || g == b || g == c || g == d || g == e || g == f ||
            h == a || h == b || h == c || h == d || h == e || h == f || h == g ||
            i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h ||
            j == a || j == b || j == c || j == d || j == e || j == f || j == g || j == h || j == i ||
            k == a || k == b || k == c || k == d || k == e || k == f || k == g || k == h || k == i || k == j ||
            l == a || l == b || l == c || l == d || l == e || l == f || l == g || l == h || l == i || l == j || l == k
            
            );
}

bool group13(){
    
    int a = user(365);
    int b = user(365);
    int c = user(365);
    int d = user(365);
    int e = user(365);
    int f = user(365);
    int g = user(365);
    int h = user(365);
    int i = user(365);
    int j = user(365);
    int k = user(365);
    int l = user(365);
    int m = user(365);
    
    bool match78 = (a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e ||
                    f == a || f == b || f == c || f == d || f == e ||
                    g == a || g == b || g == c || g == d || g == e || g == f ||
                    h == a || h == b || h == c || h == d || h == e || h == f || h == g ||
                    i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h ||
                    j == a || j == b || j == c || j == d || j == e || j == f || j == g || j == h || j == i ||
                    k == a || k == b || k == c || k == d || k == e || k == f || k == g || k == h || k == i || k == j ||
                    l == a || l == b || l == c || l == d || l == e || l == f || l == g || l == h || l == i || l == j || l == k ||
                    m == a || m == b || m == c || m == d || m == e || m == f || m == g || m == h || m == i || m == j || m == k || m == l);
   
    return (match78);
}

bool group14(){

int a = user(365);
int b = user(365);
int c = user(365);
int d = user(365);
int e = user(365);
int f = user(365);
int g = user(365);
int h = user(365);
int i = user(365);
int j = user(365);
int k = user(365);
int l = user(365);
int m = user(365);
int n = user(365);

bool match91 = (a == b || a == c || a == d || b == c || b == d || c == d || a == e || b == e || c == e || d == e ||
                f == a || f == b || f == c || f == d || f == e ||
                g == a || g == b || g == c || g == d || g == e || g == f ||
                h == a || h == b || h == c || h == d || h == e || h == f || h == g ||
                i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h ||
                j == a || j == b || j == c || j == d || j == e || j == f || j == g || j == h || j == i ||
                k == a || k == b || k == c || k == d || k == e || k == f || k == g || k == h || k == i || k == j ||
                l == a || l == b || l == c || l == d || l == e || l == f || l == g || l == h || l == i || l == j || l == k ||
                m == a || m == b || m == c || m == d || m == e || m == f || m == g || m == h || m == i || m == j || m == k || m == l ||
                n == a || n == b || n == c || n == d || n == e || n == f || n == g || n == h || n == i || n == j || m == k || n == l || n == m
                
                );
    
    return(match91);

}


int user(int upperLimit)
{
  std::random_device rd;
  std::mt19937 generator(rd());
  std::uniform_int_distribution<int>day(1,upperLimit);

  return day(generator);
}




