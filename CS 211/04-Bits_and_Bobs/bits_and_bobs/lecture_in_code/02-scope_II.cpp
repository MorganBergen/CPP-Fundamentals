#include <iostream>

int main()
{
    int count = 2;

    for (int i = 1; i <= 3; i++) {
        count = 4 + i;
        std::cout << count << '\n';
    }

    std::cout << count << '\n';

    return 0;
}

/*
 * This program is almost identical to 01-scope.cpp; there is only one key
 * difference.
 *
 * On line 10, I am not declaring a new variable. This means my output
 * changes slightly:
 * 5
 * 6
 * 7
 * 7
 *
 * So, even though count was not declared in the for loop block of code, it
 * still exists in that block. This hopefully makes sense becase the for loop
 * block is wholly contained (nested) within the main() function block where
 * count is declared. If a variable exists in a block, it will also exist
 * within nested blocks.
 *
 * The key is that the compiler will always choose the most local version
 * available. Because the variable count doesn't exist in the for loop block,
 * but does exist in the outer block, the compiler has no problem using it.
 */