// usebrass1.cpp -- testing bank account classes
// compile with brass.cpp

#include <iostream>
#include "brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Pigy("Porecelot pingg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 300.00);
    Pigy.viewAcct();
    cout << endl;
    Hoggy.viewAcct();
    cout << "Deposting $1000 into the Hogg Accout: \n";
    Hoggy.deposit(1000.00);
    cout << "New balance: $" << Hoggy.showBalance() << endl;
    cout << "Withdrawing $4200 from the Pigg Acount: \n";
    Pigy.withdraw(4200.00);
    cout << "Pigg account balance: $" << Pigy.showBalance();
    cout << "Withdrawing $4200 from the Hogg Acount: \n";
    Hoggy.withdraw(4200.00);
    Hoggy.viewAcct();

    return 0;
}