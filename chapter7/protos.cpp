// protos.cpp -- using prototypes and function calls
#include <iostream>

void cheers(int);   // prototype; no return value
double cube(double x);   // prototype; return a double

int main()
{
    using namespace std;
    cheers(5);      // function call
    double side;
    cout << "Give me a number: ";
    cin >> side;
    double volume = cube(side); // function call
    cout << "A " << side << "-foot cube has volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2)); // protopyte protection at work
    return 0;

}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";

    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}