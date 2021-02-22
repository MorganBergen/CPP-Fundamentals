#include <iostream>

int main()
{
    int input;

    // DO-WHILE LOOP
    do {
        std::cout << "This is a simple menu that does nothing. (DO LOOP)\n"
                  << "\t1. Option 1\n"
                  << "\t2. Option 2\n"
                  << "\t3. Quit\n";
        std::cout << "Please enter your choice: ";
        std::cin >> input;
    } while (input != 3);
    std::cout << "\n\n";

    // WHILE LOOP
    input = 0;  // This initialization is always necessary
    while (input != 3) {
        std::cout << "This is a simple menu that does nothing. (WHILE LOOP)\n"
                  << "\t1. Option 1\n"
                  << "\t2. Option 2\n"
                  << "\t3. Quit\n";
        std::cout << "Please enter your choice: ";
        std::cin >> input;
    }
    std::cout << "\n\n";

    // FOR LOOP
    for (input = 0; input != 3; std::cin >> input) {
        std::cout << "This is a simple menu that does nothing. (FOR LOOP)\n"
                  << "\t1. Option 1\n"
                  << "\t2. Option 2\n"
                  << "\t3. Quit\n";
        std::cout << "Please enter your choice: ";
    }
    std::cout << "\n\n";

    return 0;
}

/*
 * This file revisits the idea of syntactic sugar. The language provides many
 * different syntaxes that are capable of doing the same thing. We can see in
 * this code that each loop syntax is different, but at the end of the day,
 * they can all exhibit the same logical behavior.
 *
 * My tastes have the do-while loop feeling the most correct here.
 * Because it's a menu, there is the idea that I should present it at least
 * once, which do-while loops guarantee naturally. The user will also choose
 * when they quit, which means the number of iterations is not known. This
 * again should be pushing us more toward do-while or while.
 *
 * Whatever loop we choose for a task, we can get to work. But if we choose a
 * loop whose syntax seems a better fit, then writing that code can go easier.
 */