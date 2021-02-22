#include <iomanip>
#include <iostream>
#include <vector>

int main()
{
    // vectors are a dynamic array that can grow as needed
    std::vector<int> vint;

    // The default vector has no size and no capacity
    std::cout << "vint size: " << std::setw(2) << vint.size() << "\tcapacity: " << std::setw(2)
              << vint.capacity() << '\n';

    // push_back() inserts the new value at the rear of the vector
    // size() returns the number of elements in the array, capacity() returns
    // the maximum number of elements that the vector can hold at that time
    //
    // Pushing back on a full vector causes the vector to resize itself to hold
    // the new element
    for (int i = 0; i < 10; ++i) {
        vint.push_back(i + 1);
        std::cout << "vint size: " << std::setw(2) << vint.size()
                  << "\tcapacity: " << std::setw(2) << vint.capacity() << '\n';
    }
}