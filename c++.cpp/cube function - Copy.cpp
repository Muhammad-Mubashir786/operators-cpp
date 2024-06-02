#include <iostream>
using namespace std;
int cube(int);
int main()
{
    int number;
    cout << "Enter a number to find the cube" << endl;
    cin >> number;
    cout << "cube of " << number << " is: " << cube(number) << endl;
}
int cube(int a)
{

    return a * a * a;
}