#include <cstdio>

int main()
{
    std::printf("Hello World! %d\n", 42);

    return 0;
}

/*
 * This is a more C-style method of printing. Some people still prefer it
 * because it's more resource-efficient than std::cout, and it doesn't break up
 * the message as much as std::cout does with it's many << operators. It
 * accomplishes this by using special symbols; we see one of them here, %d. It
 * indicates that you want to print an integer.
 *
 * A downside to printf() is that it lacks extensibility and type safety. For
 * basic data, it's rarely an issue, but once we start writing custom classes
 * that we want to print, this can become an issue.
 */