// brassplus.cpp
#include <iostream>
#include "brass.h"
using std::cout;
using std::ios_base;
using std::endl;

BrassPlus::BrassPlus(const char *s, long an, double bal,
    double ml, double r): Brass(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r): Brass(ba)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::viewAcct() const
{
    // set up ###.## format
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    Brass::viewAcct();
    cout << "Maxinux loan: $" << maxLoan << endl;
    cout << "Owed to bank $" << owesBank << endl;
    cout << "Loan Rate: " << 100 * rate << "%\n";
    cout.setf(initialState);
}

// redefine how withdraw() works
void BrassPlus::withdraw(double amt)
{
    // set up ###.## format
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    double bal = showBalance();
    if (amt < bal) {
        Brass::withdraw(amt);
    }
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        deposit(advance);
        Brass::withdraw(amt);
    }
    else
        cout << "Credit limit exceeded. Transaction cancelled.\n";
    cout.setf(initialState);   
}