#include <iostream>
using namespace std;
int main()
{
    int number, i = 0, j = 1, next;
    cout << "enter a number to find its fibonacci sequence" << endl;
    cin >> number;
    cout << "Fibonacci sequence till " << number << " is: ";
    while (i <= number)
    {
        cout << i << " ";
        next = i + j;
        i = j;
        j = next;
    }
    cout << endl;
    return 0;
}
