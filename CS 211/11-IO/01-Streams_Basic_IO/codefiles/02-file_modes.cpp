/*** COMPILE AND RUN xx-create_binary_file.cpp FIRST ***/
#include <cstdint>
#include <fstream>
#include <iostream>

std::int32_t count()
{
    static std::int32_t m_count = 0;
    return m_count++;
}

int main()
{
    // This chunk relies on the file binout being created first
    std::ifstream fin("binout", std::ios::binary | std::ios::in);
    if (!fin) {
        std::cerr << "Error opening file, exiting...\n";
        return 1;
    }

    std::int32_t val;
    while (fin.read(reinterpret_cast<char*>(&val), sizeof(std::int32_t))) {
        std::cout << val << " ";
    }
    fin.close();

    // This part demonstrates appending to a file. Run the program multiple
    // times and check the file appending.txt after every run
    std::ofstream fout("appending.txt", std::ios::app | std::ios::out);
    for (int i = 0; i < 10; ++i) {
        fout << count() << ' ';
    }
    fout << '\n';
    fout.close();

    return 0;
}