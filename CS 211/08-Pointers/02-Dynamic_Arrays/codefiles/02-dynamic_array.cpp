#include <iostream>

int main()
{
    int size = 0;

    std::cout << "How large do you need your array? ";
    std::cin >> size;

    if (size <= 0) {
        size = 10;
    }

    // Dynamic array allocation
    int* dynArray = new int[size];

    // Fill array; at this point syntax is identical
    for (int i = 0; i < size; i++) {
        dynArray[i] = i + 1;
	}

    // Print array
    for (int i = 0; i < size; i++) {
        std::cout << dynArray[i] << ' ';
	}
    std::cout << '\n';

    // Returning heap memory and cleaning up dangling pointer
    delete[] dynArray;
    dynArray = nullptr;

    return 0;
}