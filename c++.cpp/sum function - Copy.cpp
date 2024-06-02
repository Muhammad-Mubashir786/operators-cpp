//Create a user-defined function named addition that takes two integer parameters and returns their
//sum. Write a program to prompt the user to enter two integers, call the addition function to
//compute their sum, and display the result
#include<iostream>
using namespace std;
int sum(int, int);
int main()
{
    int num1, num2;
    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    cout << num1 << "+" << num2 << "=" << sum(num1, num2) << endl;
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}

