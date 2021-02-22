// My first C++ program!    <-- This is a comment
                            // Comments allow us to better document our code
                            // so that we can understand it easier.

                            /* 
                             * At any point in a line, the double forward slash
                             * indicates that everything after AND on the same
                             * line is a comment. You can also start a block
                             * comment with a slash-star. Everything after the
                             * slash-star is considered a comment until you 
                             * reach the end block comment marker, star-slash.
                             */

#include <iostream>         // A preprocessor directive. This speaks directly
                            // to the compiler. This specific directive is 
                            // telling the compiler to bring in the library 
                            // iostream. iostream gives us cout in this 
                            // program. The contents of the library are pasted
                            // exactly where the include directive is placed.

int main()      			// Every C++ program must have a main function
{            
                            // Its type must be int. It can have no parameters
                            // as shown, or it can look like this:
                            // int main (int argc, char* argv[])
                            // The opening bracket indicates the beginning of a
                            // block of code

  std::cout << "Hello World! " << 42 << '\n'; 
                            // This is the line that prints to the screen
							// The "\n" is a special character which tells
							// the compiler that a new line is wanted after the
							// exclamation mark (Like the Enter key)

                            // The << here is called an insertion operator. It
                            // is used whenever we need to insert information to 
                            // a stream. Streams will be discussed in a bit 
                            // more detail in a future lecture.

  return 0;                 // A return statement terminates a function. The
                            // main function needs to return 0 at some point
                            // because it indicates a successful execution of
                            // the program. Functions can have multiple return
                            // statements

}                           // Signifies the end of a code block. Blocks can be
                            // nested, i.e., blocks can contain blocks. Proper
                            // styling becomes very important to keep track of
                            // complicated code.
