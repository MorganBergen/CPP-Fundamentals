#include <iostream>

int main()
{
    int  arr[10];
    int* parr;

    // Fill array
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
	}

    // The main concept
    parr = arr;

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << ' ';
	}
    std::cout << '\n';

    // Increment array elements through pointer
    for (int i = 0; i < 10; i++) {
        ++parr[i];
	}

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
	}
    std::cout << '\n';

    return 0;
}