/*
* Morgan Bergen
* B493R546
* Lab02
* Given the following code
 
 #include <iostream>
 int main(){
     
     int i=1;
     while(i<=20){
         int i=0;
         
         std::cout << i+1 <<'\n';i-=2;
     }
 }

* ensure it prints the odd numbers in the range [1, 20)
* with each number on its own line.
* Fix the code if it is not working.
* Style the code in a consistnt and correct manner.
*/

#include <iostream>
  
int main()

{
    int i = 0;
    while (i < 20)
    {
        i = i + 1;
        std::cout << i << '\n';
        i++;
    }

    return 0;
}
