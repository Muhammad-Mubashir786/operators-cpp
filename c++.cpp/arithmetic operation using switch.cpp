#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char oper;
    cout << "enter a number" << endl;
    cin >> num1;
    cout << "enter an operator (+,-,*,/)" << endl;
    cin >> oper;
    cout << "enter second number" << endl;
    cin >> num2;
    switch (oper)
    {
    case '+':
    {
        cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
        break;
    }
    case '-':
    {
        cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
        break;
    }
    case '*':
    {
        cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
        break;
    }
    case '/':
    {
        if (num2 == 0)
        {
            cout << "error dividor cannot be zero" << endl;
        }
        else
        {
            cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
        }
        break;
    }
    default:
    {
        cout << "invalid operator" << endl;
    }
    }
    return 0;
}
