#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "Enter a number: " << endl;
    cin >> a;
    if (a < 0)
    {
	cout << "The number you entered in a negative number: " << a << endl;
	}
	else if  (a > 0)
    {
	cout << "The number you entered in a positive number: " << a << endl;
	}
	else 
	cout << "The number you entered is neither positive nor negative: 0"<<endl;
	return 0;
}
