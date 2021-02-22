/*

 Morgan Bergen
 B493R546
 hw07
 
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

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <functional>
#include <utility>
#include <cstdlib>
#include <cstring>
 

// C++ program to sort a string of characters

using namespace std;
// function to print string in sorted order

void bubblesort(string &str)
{
    
    sort(str.begin(), str.end());
    

    for (int i = 0; i < str.size(); i++){
        cout << str[i] << " " << i << endl;
    }
    
}
// Driver program to test above function
int main()
{
    std::cout << "Enter a phrase: ";
    std::string word;
    std::getline(std::cin, word);
    
    bubblesort(word);
    
    return 0;
}


