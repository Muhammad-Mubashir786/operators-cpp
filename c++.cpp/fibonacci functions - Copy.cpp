#include <iostream>
using namespace std;
void fibonacci(int);
int main()
{
    int number;
    cout << "Enter a number to find its fibonacci sequence" << endl;
    cin >> number;
    cout << "Fibonacci sequence  " << number << " is:" << endl;
    fibonacci(number);
}
void fibonacci(int num)
{
    int n1 = 0, n2 = 1, nextTerm;
    for (int i = 1; i < num; i++)
    {
        cout << n1 << " ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    
}