// external.cpp -- external variables
#include <iostream>

using namespace std;

// external variable
double warming = 0.3;

// function protortypes
void update(double dt);
void local();

int main()
{
    cout << "Global warming is " << warming << " degress.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degress.\n";
    local();
    cout << "Global warming is " << warming << " degress.\n";
    return 0;
}

void update(double dt)
{
    extern double warming; // optional redeclaration
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the 
    // scope resolution operator
    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}