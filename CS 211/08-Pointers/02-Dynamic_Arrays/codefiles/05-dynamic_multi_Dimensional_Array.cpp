#include <iomanip>
#include <iostream>

int main()
{
    int rows;
    int cols;

    std::cout << "Rows: ";
    std::cin >> rows;
    std::cout << "Cols: ";
    std::cin >> cols;

    /*
     * We must declare a pointer to a pointer to an integer (double pointer to
     * an integer) because a 2-D array is really an array of arrays, and an
     * array is a pointer in disguise
     *
     * What I allocate here is an array of pointers to integers (each element
     * will hold an address)
     */
    int** arr = new int*[rows];

    /*
     * The array declared above is still 1-D. But each element is a pointer,
     * meaning they are capable of allocating their own 1-D arrays. The
     * collection of 1-D arrays will make up our 2-D array
     */
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j + 1;  // Just putting values into the array
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << std::setw(3) << arr[i][j] << ' ';  // Printing and formatting so that
        }                                                   // up to 3-digit numbers still look nice
        std::cout << '\n';
    }

    /*
     * In order to correctly delete all the dynamic memory, we de-allocate in reverse
     * order from how it was allocatted; just undoing our allocations
     *
     * So first, we delete the individal 1-D arrays that make up our 2-D array
     *
     * Then, we can delete the array of pointers
     */
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
        arr[i] = nullptr;
    }
    delete[] arr;
    arr = nullptr;

    return 0;
}