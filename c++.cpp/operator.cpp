#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;
    cout<<"Following are the arithmetic operations"<<endl;
    cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
    cout << "The sub of " << a << " and " << b << " is: " << a - b << endl;
    cout << "The multiply of " << a << " and " << b << " is: " << a * b << endl;
    cout << "The divide of " << a << " and " << b << " is: " << a / b << endl;
    cout<<"The mode of "<<a<<" and "<<b<<" is: "<<a%b<<endl;
    cout << "The a++ is  " << a++ << endl;
    cout << "The a-- is  " << a-- << endl;
    cout << "The ++a is  " << ++a << endl;
    cout << "The --a is  " << --a << endl;
    cout <<endl;
    cout << "Following are the comparison operations" << endl;
    cout<<"The value of a==b: "<<(a==b)<<endl;
    cout<<"The value of a>b: "<<(a>b)<<endl;
    cout<<"The value of a<b: "<<(a<b)<<endl;
    cout<<"The value of a>=b: "<<(a>=b)<<endl;
    cout<<"The value of a<=b: "<<(a<=b)<<endl;
    cout<<"The value of a!=b: "<<(a!=b)<<endl;
    cout << endl;
    cout << "Following are the logical operations" << endl;
    cout << "The value of a==b && a>b: " << ((a == b)&&(a>b)) << endl;
    cout << "The value of a==b || a>b: " << ((a == b)||(a>b)) << endl;
    cout << "The value of a==b && a>b: " << ((a == b)&&(a>b)) << endl;
    cout << "The value of (!(a==b)) " << (!(a == b)) << endl;

    return 0;
}