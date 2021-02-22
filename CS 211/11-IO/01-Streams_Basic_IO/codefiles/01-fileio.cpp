#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

int main()
{
    // I have to declare file streams
    // The type is ifstream (input file stream) and the name of the stream is fin
    std::ifstream fin;

    // The type is ofstream (output file stream) and the name of the stream is fout
    std::ofstream fout;

    int x;
    int y;

    // Attaching file to my input stream
    // fileInput is the calling object, calling its open() function
    fin.open("input.txt");
    if (!fin) {  // Checking it opened successfully
        std::cout << "Error opening file. Exiting...\n";
        exit(1);
    }

    // Attaching file to my output stream
    // outFile is the calling object, calling its open() function
    fout.open("output.txt");
    if (!fout) {
        std::cout << "Error opening file. Exiting...\n";
        exit(1);
    }

    do {
        fin >> x;  // Use of an ifstream is just like cin
        fin >> y;

        fout << "(" << x << ", " << y << ")" << '\n';  // Use of an ofstream is just like std::cout
    } while (!(fin.eof()));

    // Now that we've finished processing the files, we should close them
    fin.close();
    fout.close();

    return 0;
}
