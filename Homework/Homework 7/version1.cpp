#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <functional>
#include <utility>
#include <cstdlib>
#include <cstring>

int main(){
    
    for
    
    
    
    
    std::string input = "";
    std::cout << "Enter a phrase: ";
    std::cin >> input;

    char output[input.length() + 1];

    strcpy(output, input.c_str()); //The function strcpy converts a string to a character array
    
    for (int i = 0; i < input.size(); i++){
        std::cout << output[i] << " ";
    }
    std::cout << std::endl;
    
    std::string string1 = std::to_string(input[0]);

    std::cout << output; // character array
    std::cout << input; // string
    
    std::cout << std::endl;
    
    std::string number;
    
    for (int i = 0; i < input.size(); i++) {
        number = std::to_string(input[i]);
        std::cout << number << " "; // string of integer output
        
    }
    std::cout << std::endl;
    
    
    
    
    
    
    
    int a[] = {3, 10, 9, 2, 5, 1};
    bubblesort(a, 6);
    for (int i = 0; i < 6; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    

    
    

    return 0;
    
}


void bubblesort(int arr[], int length){
    
    for (int i = length -1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) {
                
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
}




*

//void bubblesort(std::string unsorted);

int main(){
    
    std::cout << "Enter a phrase: ";
    std::string word;
    std::getline(std::cin, word);
    
//    bubblesort(word);
    
    
    for (int i = 0; i < word.size(); i++){
        std::cout << word[i] << std::endl;
    }
    std::cout << std::endl;
    
    for (int i = 0; i < word.size(); i++) {
        std::cout << int(word[i]) << " ";
    }
    std::cout << std::endl;
    
    
    
    
    
    
    
//    std::string userInput = "";
//    std::cout << "Enter a phrase: ";
//    std::cin >> userInput;
//
//    for (int i = 0; i < userInput.size(); i++){
//        std::cout << userInput[i] << std::endl;
//    }
//    std::cout << std::endl;
//
//    for (int i = 0; i < userInput.size(); i++) {
//        int a = static_cast<int>(userInput[i]);
//        std::cout << a << " "; // string of integer output
//    }
//    std::cout << std::endl;
    
    
    

   
    
    return 0;
}



//void bubblesort(std::string unsorted){
//
//
//
//    0123
//    bcda
//
//    3012
//    abcd
//
//     */
//
//
//    for (int i = 1; i < unsorted.size(); i++) {
//        if (unsorted[i - 1] > unsorted[i]) {
//            std::swap(A[i-1], A[i]);
//        }
//    }
    
    
    
 



/*
 Pseudo-code for the bubble-sort algorithm.
 
 Procedure bubbleSort( A : list of sortable items )
 N = length(A)
 repeat
     swapped = false
     for i = 1 to n - 1 inclusive do
         //if this pair is out of order
         if A[i-1] > A[I] then
             //swap them and remember something changed
             swap( A[i-1], A[i] )
             swapped = true
         end if
     end for
 Until not swapped
 End procedure
 */




















































/*

Description

Ask for a store a sentence or phrase that is typed in by the user.
Count the occurrences of every letter (do not separate upper and lowercase).
Print a table showing only the letters that appeared, sorted so that the that appeared the most frequently is at the top.
    In case of a tie, fall back to alphabetical order
Perform the sort using bubble sort
    You are required to write this function.
        The return type shall be void
        The name of the function shall be bubble_sort

Hints

When starting to test your code, don't use phrases or sentences.  Instead just type letters for which you control the counts.
Choose to work exclusively in upper-case letters.
Test with non-letter ASCII characters.
Your life may be easier by utilizing std::pair from <utility>.

 
 Pseudo-code for the bubble-sort algorithm.
 
 Procedure bubbleSort( A : list of sortable items )
 N = length(A)
 repeat
     swapped = false
     for i = 1 to n - 1 inclusive do
         //if this pair is out of order
         if A[i-1] > A[I] then
             //swap them and remember something changed
             swap( A[i-1], A[i] )
             swapped = true
         end if
     end for
 Until not swapped
 End procedure
*/











































































































/*
 
 std::cout << static_cast<int>(phrase[i]) << " ";
 
std::string input = "-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12";
std::stringstream ss(input);

const int SPACING = 3;

const size_t SIZE = 50;
int myArray[SIZE] = {0};
int count = -1;

//fills the array with integers
while (ss >> myArray[++count]); //NULL statement

//create pointers to the beginning and end of the array
int *beg = myArray;
int *end = myArray + count;


//Sorts the array
std::sort(beg, end, std::greater<int>());

int current = myArray[0];
count = 1;


//counts the number of each value in the array
while (++beg != end)
{
   
    if (current != *beg)
    {
        std::cout << std::setw(SPACING) << current << std::setw(SPACING) << count << std::endl;
        current = *beg;
        count = 0;
    }

    ++count;
}

//outputs the final value
std::cout << std::setw(SPACING) << current << std::setw(SPACING) << count << std::endl;

std::cin.ignore();
return 0;
 
 
 
 
 
 std::string phrase;
 std::cout << "Enter a phrase: ";
 std::getline(std::cin, phrase);
 
 std::cout << phrase << std::endl;
 std::cout << "The ASCII Value of Each character: ";
 
 for (int i = 0; i < phrase.size(); i++) {
     std::cout << static_cast<int>(phrase[i]) << " ";
 }
 
 
 
 
 
 Your question infers that I ought not ask the user for input in the from of a string?
 
 
 The reason as to why I want to convert into an array, is because an array is the only way in which I can sort each letter they input by means of index positioning.
 
 td;dr:  An array will allow me to use index positioning to sort.
 
 
 
 
 
 
 
*/













std::string input = "-12 3 -12 4 1 1 -12 1 -1 1 2 3 4 2 3 -12";
std::stringstream ss(input);

const int SPACING = 3;

const size_t SIZE = 50;
int myArray[SIZE] = {0};
int count = -1;

//fills the array with integers
while (ss >> myArray[++count]); //NULL statement

//create pointers to the beginning and end of the array
int *beg = myArray;
int *end = myArray + count;


//Sorts the array
std::sort(beg, end, std::greater<int>());

int current = myArray[0];
count = 1;


//counts the number of each value in the array
while (++beg != end)
{
   
    if (current != *beg)
    {
        std::cout << std::setw(SPACING) << current << std::setw(SPACING) << count << std::endl;
        current = *beg;
        count = 0;
    }

    ++count;
}

//outputs the final value
std::cout << std::setw(SPACING) << current << std::setw(SPACING) << count << std::endl;

std::cin.ignore();









/*



