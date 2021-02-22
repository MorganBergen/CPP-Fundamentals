#include <iostream>
#include <string>

int main()
{
    std::string phrase;
    std::string other = "Hello World\n";
    std::string name;

    phrase = "Hello World!\n";

    std::cout << phrase;
    // cout << phrase.compare(other) << endl;
    std::cout << (phrase < other) << '\n';

    std::cout << "What's your name, man? ";
    char letter;

    // A size value is required in order to use cin.getline for c-strings
    std::getline(std::cin, name);

    /* The C-string version of this loop has a lot of extra work to ensure that
     * the null character is protetcted, that the capacity of name[] is not
     * exceeded. We don't have those worries here.
     */
    // while (1) {
    //     std::cin.get(letter);
    //     if (letter == '\n') {
    //         break;
    //     }
    //     name.push_back(letter);
    // }

    std::cout << name << '\n';

    return 0;
}