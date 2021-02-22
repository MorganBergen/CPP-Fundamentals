#include <iostream>

int main()
{
    int size;

    std::cout << "How large do you need your array? ";
    std::cin >> size;

    int* dynArray = new int[size];

    for (int i = 0; i < size; i++) {
        *(dynArray + i) = i + 1;
	}

    for (int i = 0; i < size; i++) {
        std::cout << "At: " << (dynArray + i) << "\tVal: " << *(dynArray + i) << '\n';
    }
    std::cout << '\n';

    delete[] dynArray;
    dynArray = nullptr;

    return 0;
}