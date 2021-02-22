/*
 
 Morgan Bergen
 B493R546
 Lab07
 
 Description:
 The program must declare a vector of integers that can contain [10, 20]. The program will print the following,
 "The sum is: N" where N is the sum of the numbers in range [10, 20].
 Not counting the return statement, the main function will contain no more than 3 statements.
 No functions or code outside the main function is allowed (Naturally, #include statements are not counted). See the skeleton below:
 
 #include <INCLUDES>
 
 int main(){
 
 Statement 1:
 Statement 2:
 Statement 3:
 
 return 0;
 
 }
 HINT:  Manually verify the result before submitting.
 */

#include <iostream>
#include <vector>

int main(){

    
    //Statement 1:
    std::vector<int> integers = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    
    //Statement 2:
    int N = integers[0] + integers[1] + integers[2] + integers[3] + integers[4] +
            integers[5] + integers[6] + integers[7] + integers[8] + integers[9] + integers[10];
    
    //Statement 3:
    std::cout << "The sum is: " << N << std::endl;
    
    return 0;
}

