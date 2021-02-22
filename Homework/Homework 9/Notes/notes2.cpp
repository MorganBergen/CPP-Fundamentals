#include "iostream"//include statement(s)
#include "iomanip"
#include "fstream"
using namespace std;//using namespace statement(s)


ifstream fin( fnameCppStr.c_str() );
if( fin )
{
    int numWords = 0, numChars = 0;
    string word;
    // input each word until end of file ... //
    
    while( fin >> word )
    {
        ++numWords;
        int len = word.size();
        if( ".?!,;".find( word[len-1] ) != string::npos )
            word.erase( len-1 );
        numChars += word.size();
    }
    fin.close();
    // report counts, etc...
}
else
{
    // print some error message
}
