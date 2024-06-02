#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int number;
    cout << "enter number to find factorial" << endl;
    cin >> number;
    cout << "factorial of " << number << " is: " << fact(number) << endl;
    return 0;
}
int fact(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}