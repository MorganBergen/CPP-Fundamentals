#include <iostream>
#include <memory>

void print(int* num)
{
    std::cout << *num << '\n';
}

/*
 * unique_ptr holds a pointer to dynamic memory with the bonus of being able to
 * manage its resource automatically. Even though there is no delete statement,
 * the heap-alloacated data gets cleaned up when the unique_ptr goes out of
 * scope. unique_ptr brings with it a concept of ownerhsip; a unique_ptr cannot
 * be copied.
 */
int main()
{
    // The preferred method of initialized a unique_ptr; does not work for all
    // use cases, like dynamic arrays or polymorphism
    auto intPtr = std::make_unique<int>(42);

    // "Traditional" way of allocating to a unique_ptr
    std::unique_ptr<int[]> intArrPtr(new int[5]);

    // Once created, the smart pointer can be treated just like a regular
    // pointer
    std::cout << *intPtr << '\n';

    // The get() function passes a raw pointer to the resource; the agreement
    // is that the function won't try to delete the data
    print(intPtr.get());

    // Note that the code looks just like it would for any array
    for (int i = 0; i < 5; ++i) {
        intArrPtr[i] = i + 1;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << intArrPtr[i] << ' ';
    }
    std::cout << '\n';

    // No need to delete, it's taken care of automatically
    // This is a HUGE gain in large and complicated codebases where deletion
    // may happen in a completely different part of the code.

    return 0;
}