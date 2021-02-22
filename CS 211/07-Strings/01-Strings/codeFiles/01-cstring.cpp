#include <cstring>
#include <iostream>

int main()
{
    char phrase[32];
    char other[32] = "Hello World\n";
    char name[64];  // Do not need the <cstring> library to declare,
                    // initialize, std::cin, or std::cout cstrings

    // Prefer the 'n' version of cstring functions where possible
    std::strncpy(phrase, "Hello World!\n", sizeof(phrase) - 1);

    std::cout << phrase;

    /* strncmp() returns an integer that reflects that relationship between the
     * first and second arguments, and 0 when they are equivalent. 0 converts to
     * false in a Boolean expression. So, to test for equivalence, we must
     * negate the output.
     */
    if (!std::strncmp(phrase, other, strlen(phrase))) {
        std::cout << "Equal\n";
    } else {
        std::cout << "Not Equal\n";
    }
    std::cout << "\n\n";

    std::cout << "What's your name, man? ";

    // A size value is required in order to use cin.getline for c-strings
    // std::cin.getline(name, sizeof(name) - 1);

    char letter;
    unsigned int index = 0;
    while (1) {
        if (index < sizeof(name) - 1) {
            std::cin.get(letter);
            if (letter == '\n') {
                letter = '\0';
                name[index] = letter;
                break;
            }
            name[index] = letter;
            index++;
        } else {
            name[index] = '\0';
            break;
        }
    }

    std::cout << name << '\n';

    return 0;
}