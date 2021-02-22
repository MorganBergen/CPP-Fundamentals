#include <iostream>
#include <string>

struct Name {
    std::string first;
    std::string middle;
    std::string last;
};

std::string first_last(const Name& name)
{
    return name.first + " " + name.last;
}

std::string initials_last(const Name& name)
{
    std::string initialsLast;

    initialsLast.push_back(name.first[0]);
    initialsLast += ". ";
    if (name.middle.length() > 0) {
        initialsLast.push_back(name.middle[0]);
        initialsLast += ". ";
    }
    initialsLast += name.last;

    return initialsLast;
}

std::string first_lastInitial(const Name& name)
{
    std::string firstLastInitial = name.first + " ";
    firstLastInitial.push_back(name.last[0]);
    firstLastInitial += ".";

    return firstLastInitial;
}

void change_surname(std::string newSurname, Name& name)
{
    name.last = newSurname;
}

int main()
{
    Name myName = { "Adam", "", "Sweeney" };
    Name jane   = { "Eliza", "Cate", "Coupe" };
    Name barry  = { "Barry", "Alan", "Pincus" };

    std::cout << first_last(myName) << '\n';
    std::cout << initials_last(jane) << '\n';
    change_surname("Manilow", barry);
    std::cout << first_lastInitial(barry) << '\n';

    return 0;
}