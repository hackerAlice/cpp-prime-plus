// brass.cpp -- bank account class methods
#include <iostream>
#include "brass.h"
#include <cstring>

using std::cout;
using std::ios_base;
using std::endl;

Brass::Brass(const char *s, long an, double bal)
{
    std::strncpy(fullName, s, MAX - 1);
    fullName[MAX - 1] = '\0';
    acctNum = an;
    balance = bal;
}

void Brass::deposit(double amt)
{
    if (amt < 0) 
    {
        cout << "Neqative deposit not allowed: "
            << "deposit is cancelled.\n";
    }
    else
        balance += amt;
}

void Brass::withdraw(double amt)
{
    if (amt < 0)
        cout << "Withdrawal amoount must be positive: "
            << "withdrawal canceled.\n";
    else if (amt <= balance) 
        balance -= amt;
    else
        cout << "Withdrawal amout of $" << amt
            << " exceeds your balance.\n"
            << "Withdrawal canceled.\n";
}

double Brass::showBalance() const
{
    return balance;
}

void Brass::viewAcct() const
{
    // set up ###.## format
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance $" << balance << endl;
    cout.setf(initialState); // restore origin format;
}
