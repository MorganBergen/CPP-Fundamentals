#include <cstring>
#include <iostream>

int main(int argc, char** argv)
{
    if (argc < 2) {
        std::cerr << "Must specify size.\n";
        return 1;
    }

    int size = std::atoi(argv[1]);
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