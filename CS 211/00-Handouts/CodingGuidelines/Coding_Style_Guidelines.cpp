// File Name: program1.cpp
// Author: Joe Shobe
// Student ID: a999b999
// Assignment Number: 1

#include <iostream>
using namespace std;

int main()
{
    // This is the section for declarations (before any statements)
    int x;
    int y = 1;
    int z = 2;

    /*
     * In the examples below, notice the following:
     *
     * A single indent occurs for all statements within a process-control
     * statement (if, if-else, while, do-while, for, switch)
     *
     * The openining curly brace (if used) is always preceeded by a single space
     *
     * The closing curly brace (if used) is always the first character on the
     * line at the same indentation level as the process-control statement it
     * belongs to
     *
     * There are no blank lines immediately following the process-control
     * statement or prior to the closing curly brace (the change in indention
     * level will suffice for making the code easier to read)
     *
     * A single blank line can preceed and follow a grouping of statements so
     * long as the grouping of statements form a logical body of work (or
     * commentary)
     */

    // Simple assignment statement
    //
    // Note use of a single space before and after each binary operator
    x = y + z + 3;

    // if-else (single statements within each section)
    //
    // Note there are no blocks (curly braces) since each section is only a
    // single statement
    // Note there is no space between variable identifier name and a unary
    // operator
    if (x == 6)
        x++;
    else if (x == 7)
        x--;
    else
        ++x;

    // if-else (at least one section with multiple statements)
    //
    // Note the use of blocks (curly braces) for each section if at least one
    // section has multiple statements. I recommend always using braces.
    if (x == 6) {
        x++;
    } else if (x == 7) {
        x--;
        y++;
    } else {
        ++x;
    }

    // while loop (single statement)
    //
    // Note there are no blocks (curly braces) since only a single statement
    while (x < 10)
        x++;

    // while loop (multiple statements)
    //
    // Note the use of blocks (curly braces) since multiple statements
    while (x < 10) {
        x++;
        y--;
    }

    // do-while loop (single statement)
    //
    // Note there are no blocks (curly braces) since only a single statement
    do
        x++;
    while (x < 10);

    // do-while loop (multiple statements)
    //
    // Note the use of blocks (curly braces) since multiple statements
    do {
        x++;
        y--;
    } while (x < 10);

    // for loop (single statement)
    //
    // Note there are no blocks (curly braces) since only a single statement
    for (int i = 0; i < 10; i++)
        x++;

    // for loop (multipel statements)
    //
    // Note the use of blocks (curly braces) since multiple statements
    for (int i = 0; i < 10; i++) {
        x++;
        y--;
    }

    // switch
    //
    // Note the use of blocks (curly braces) regardless of single/multiple
    // statements
    // Note the case/defaults keywords are aligned at the same indentation level
    // as the switch statement they belongs to
    switch (x) {
    case 1:
        y++;
        break;
    case 2:
        y--;
        break;
    default:
        y = 0;
        break;
    }

    // Nested process control statements (single statement)
    if (x == y)
        if (y == z)
            for (int i = 0; i < 10; i++)
                z++;
        else
            while (x < 10)
                x++;
    else if (y == z)
        do
            x++;
        while (x < 10);

    // Nested process control statements (with braces)
    // This is recommended
    if (x == y) {
        if (y == z) {
            for (int i = 0; i < 10; i++) {
                z++;
                y--;
            }
        } else {
            while (x < 10) {
                x++;
                y--;
            }
        }
    } else if (y == z) {
        do {
            x++;
            y--;
        } while (x < 10);
    }
}
