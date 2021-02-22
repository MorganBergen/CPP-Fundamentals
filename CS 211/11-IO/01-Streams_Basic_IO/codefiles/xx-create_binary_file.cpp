#include <cstdint>
#include <fstream>
#include <iostream>
#include <random>

int main()
{
    std::ofstream fout("binout", std::ios::out | std::ios::binary);
    if (!fout) {
        std::cerr << "Error opening file, exiting...\n";
        return 1;
    }

    std::mt19937                                prng(std::random_device{}());
    std::uniform_int_distribution<int>          randSize(5, 20);
    std::uniform_int_distribution<std::int32_t> randVal(1, 1000);

    std::int32_t              size = randSize(prng);
    std::vector<std::int32_t> vals;

    for (std::int32_t i = 0; i < size; ++i) {
        vals.push_back(randVal(prng));
    }

    // In binary mode, we always use the stream's write function. And we always
    // write character arrays (remember that arrays decay to pointers).
    // NOTE: reinterpret_cast is extrememly powerful, and should only be used
    // as a tool necessity. It strong-arms the compiler into reading one data
    // type as another while preserving the bit layout. We don't care about new
    // lines, or looking pretty when printing in binary. We care about putting
    // the data into the file.
    for (auto i : vals) {
        fout.write(reinterpret_cast<char*>(&i), sizeof(i));
    }

    std::cout << "Written values in binary:\n";
    for (auto i : vals) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    fout.close();

    return 0;
}