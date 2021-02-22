#ifndef MONEY_HPP
#define MONEY_HPP

#include <iomanip>
#include <iostream>
#include <locale>

/*
 * It's worth mentioning that this is a small class, and that it is lacking a
 * lot of functions/behavior/error-checking that would be expected from a class
 * that represents money. But there is more than enough to chew on in this
 * example.
 */

class Money {
public:
    Money() = default;
    Money(int d, int c);
    Money(double money);
    int   getDollars() const;
    int   getCents() const;
    void  setDollars(int d);
    void  setCents(int c);
    void  print() const;
    Money add(Money r);

private:
    int m_cents = 0;
};

// Free function; not a class member
Money inputMoney();

// Implementation of the Money class
Money::Money(int d, int c)
  : m_cents(d * 100 + c)
{}

Money::Money(double money)
  : m_cents(static_cast<int>(round(money * 100)))
{}

int Money::getDollars() const
{
    return m_cents / 100;
}

int Money::getCents() const
{
    return m_cents % 100;
}

void Money::setDollars(int d)
{
    m_cents = d * 100 + getCents();
}

void Money::setCents(int c)
{
    m_cents = getDollars() * 100 + c;
}

void Money::print() const
{
    // if (m_cents < 0) {
    // 	std::cout << "(";
    // }

    // std::cout << "$" << abs(getDollars()) << "." << std::setfill('0') << std::setw(2) <<
    // abs(getCents());

    // if (m_cents < 0) {
    // 	std::cout << ")";
    // }

    // This prints money using the Standard Library. The formatting will be a tiny bit different
    // than the code above because it won't enclose a negative amount in "()". Now, it is possible
    // to make the Standard Library do this, but the code required to do so is "complex" enough
    // to be more of a distraction than a help right now.
    //
    // Without std::showbase, you won't see any currency symbols
    std::cout.imbue(std::locale("en_US.UTF-8"));
    std::cout << std::showbase << std::put_money(static_cast<long double>(m_cents));
}

Money Money::add(Money r)
{
    int sum = m_cents + r.m_cents;

    return Money(sum / 100, sum % 100);
}

Money inputMoney()
{
    std::string m;
    do {
        std::cout << "How much money do you have (d.cc)? ";
        std::cin >> m;

        if (m.at(0) == '$')
            break;
    } while (1);

    double amount = std::stod(m.substr(1, std::string::npos));

    return Money(amount);
}

#endif
