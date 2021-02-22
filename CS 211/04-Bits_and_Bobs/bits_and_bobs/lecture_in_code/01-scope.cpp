#include <iostream>

int main()
{
    int count = 2;

    for (int i = 1; i <= 3; i++) {
        int count = 4 + i;
        std::cout << count << '\n';
    }

    std::cout << count << '\n';

    return 0;
}

/*
 * Take a guess at what will be printed to the screen, compile, and check.
 *
 *
 *
 *
 * Scroll down a ways to continue reading about this code
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * We will see:
 * 5
 * 6
 * 7
 * 2
 *
 * Maybe we expected the 5, 6, 7, was the 2 expected? Why was a 2 printed? The
 * answer is scope. The for loop creates its own level of scope. (We can see
 * that easily because of the curly braces)
 *
 * Within a level of scope (or block level), variables declared inside a block
 * exist SOLELY within that block. So, we can note on line 10 that a new
 * variable count was declared. The reason the compiler doesn't wig out is
 * because of scope.
 *
 * The variable declared on line 10 exists in a different level of scope than
 * the variable declared on line 7 (Proper style helps make this more
 * apparent because of different indentation levels). The compiler will always
 * choose the most local version of a variable that it can.
 *
 * What is meant by local? We can see that the for loop block is nested
 * (contained) within the main function block. As a nested block, the for loop
 * has a scope that is more local than that of the main() function. So, the for
 * loop does not touch the variable from line 7, and only modifies the one
 * declared on line 10.
 *
 * So, by the time we reach line 14, the version of count that existed in the
 * for loop NO LONGER EXISTS because we have exited that block. So, the count
 * variable that gets printed is the one that was declared on line 7.
 */