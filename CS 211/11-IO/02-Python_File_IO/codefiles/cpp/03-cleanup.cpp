#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

// This function actually does the hard work
void makeNeat(std::istream& sin, std::ostream& sout, int prec, int fieldw);

int main()
{
    std::ifstream fin("raw.dat");  // Input file stream
    if (fin.fail()) {              // If I open a file, I need to make sure I opened it
        std::cout << "Failed to open input file. Exiting...\n";
        exit(1);
    }

    std::ofstream fout;  // Output file stream
    fout.open("clean.dat");
    if (fout.fail()) {  // If I open a file, I need to make sure I opened it
        std::cout << "Failed to open output file. Exiting...\n";
        exit(1);
    }

    makeNeat(fin, fout, 5, 20);

    fin.close();   // If I open a file,
    fout.close();  // I had better close it

    return 0;
}

/* A note on passing streams to functions
 * 		We are able to pass streams to functions, but there are a couple rules
 * 		- First, we ALWAYS pass the stream by reference
 * 		- Second, the stream should be ready to be used; it should already exist and
 * 		have a file attached to it sin the case of file streams
 * 		- Note the types for the streams, istream and ostream
 * 		- These are the generic types for input streams and output streams, respectively
 * 		- This makes our function more flexible, we can pass a any kind of input or output
 * 		stream, we are not restricted to just a file stream or cin/std::cout
 */
void makeNeat(std::istream& sin, std::ostream& sout, int prec, int fieldw)
{
    double num;
    int    entry = 1;

    char prev = sout.fill('.');
    sout.setf(std::ios::fixed);
    sout.setf(std::ios::showpoint);
    sout.precision(prec);

    while (sin >> num) {
        sout << std::left << std::setw(4) << entry << std::right << std::setw(fieldw)
             << std::showpos << num << '\n';
        entry++;
        sout.unsetf(std::ios::showpos);
    }

    sout.fill(prev);
}
