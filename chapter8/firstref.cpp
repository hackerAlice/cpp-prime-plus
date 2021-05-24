// firstref.cpp -- defining and using a reference
#include <iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;

    cout << "rats = " << rats;
    cout << ", rodents " << rodents << endl;
    rodents++;
    cout <<  "rats = " << rats;
    cout << ", rodents " << rodents << endl;

    // some implementation require type casting the following
    // address to type unsigned
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}