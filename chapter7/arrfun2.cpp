// arrfun2.cpp -- function with an array argument

#include <iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);
// use std:: instead of using directive
int main()
{
    int cookie[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

    std::cout << cookie << " = array address, ";
    std::cout << sizeof cookie <<" = sizeof cookies\n";
    int sum = sum_arr(cookie, ArSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookie, 3);
    std::cout << "First threee eaters are " << sum << " cookies.\n";
    sum = sum_arr(cookie + 4, 4);
    std::cout << "Last four eaters are " << sum << " cookies.\n";
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; i++)
        total = total + arr[i];

    return total;
}