// usebrass2.cpp -- polymophic example
// compile with brass.cpp
#include <iostream>
#include "brass.h"

const int CLENTS = 4;
const int LEN = 40;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    Brass * p_clients[CLENTS];

    int i;
    for (i = 0; i < CLENTS; i++)
    {
        char temp[LEN];
        long tempnum;
        double tempbal;
        char kind;
        cout << "Enter client's name: ";
        cin.getline(temp, LEN);
        cout << "Enter client's account number: ";
        cin >> tempbal;
        cout << "Enter 1 for brass account or "
            << "2 for BrassPlus Account: ";

        while (cin >> kind && (kind != '1' && kind != '2'))
            cout << "Enter either 1 or 2: ";

        if (kind == '1') {
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        }
        else
        {
            double tmax, trate;
            cout << "Enter the overdraft linet: $";
            cin >> tmax;
            cout << "Enter the interest rate as a decimal fraction: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0; i < CLENTS; i++) {
        p_clients[i]->viewAcct();
        cout << endl;
    }
    for (int i =0; i < CLENTS; i++)
    {
        delete p_clients[i];
    }
    cout << "Done.\n";
    return 0;
}