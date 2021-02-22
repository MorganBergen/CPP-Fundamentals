#include <iostream>
#include <array>
#include <random>


bool group14();
int user(int upperLimit);

int main(){
    
    int totalMatch14 = 0;
    for (int i = 0; i < 10000; i++) {
        if (group14()) {
            totalMatch14 = totalMatch14 + 1;
        } else
            std::cout << '\0';
    }
    double group14 = static_cast<double>(totalMatch14)/100;
    
    std::cout << group14 << std::endl;
    
    
    return 0;
}


bool group15(){

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
int o = user(365);
int p = user(365);

    
    
bool match1275 = (
                  
                 
                
                );
    
    
bool matches
    
    return(match105);

}


int user(int upperLimit)
{
  static std::random_device rd;
  static std::mt19937 generator(rd());
  static std::uniform_int_distribution<int>day(1,upperLimit);

  return day(generator);
}
