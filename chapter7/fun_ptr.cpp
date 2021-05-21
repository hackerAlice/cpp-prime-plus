// fun_ptr.cpp -- pointesrs to functions
#include <iostream>

double betsy(int);
double pam(int);

// second argument is pointer to a type double function that
// takes a type in argument
void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std;
    int code;

    cout << "How many lines of code do you need?";
    cin >> code;
    cout << "Here is Betsy's estimate: \n";
    estimate(code, betsy);
    cout << "Here's Pam's estimate: \n";
    estimate(code, pam);
    return 0;
}

double betsy(int ins)
{
    return 0.05 * ins;
}

double pam(int ins)
{
    return 0.03 * ins + 0.0004 * ins * ins;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << "hour(s)\n";
}