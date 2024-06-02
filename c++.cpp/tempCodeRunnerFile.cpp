#include <iostream>
using namespace std;

int main()
{
    int num, num2, nextNumber;
    cout << "Enter a number to the term in fibonacci sequence" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        nextNumber = num + num2;
        num = num2;
        num2 = nextNumber;
    }
    cout << nextNumber;

    return 0;
}