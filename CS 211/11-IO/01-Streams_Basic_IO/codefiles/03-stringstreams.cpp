#include <fstream>
#include <iostream>
#include <sstream>  // std::stringstream
#include <string>

int main()
{
    std::string input;
    int         x;
    int         y;

    std::fstream fin("input.txt");
    if (!fin) {
        std::cerr << "Error opening file, exiting...\n";
        return 1;
    }
    while (std::getline(fin, input)) {
        std::istringstream sin(input);  // An input stringstream
        sin >> x >> y;
        std::cout << x << " + " << y << " = " << (x + y) << '\n';
    }
    fin.close();

    return 0;
}