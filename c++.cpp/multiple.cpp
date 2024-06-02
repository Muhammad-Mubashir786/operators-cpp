#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	cout << "enter any two numbers"<<endl;
	cin >> a>>b;
	if (a%b==0)
	{
		cout <<"this number is multiple of second number " << endl;
	}
	else 
	{
		cout <<"this number is not a multiple of second number " << endl;
	
	}
	return 0;
}
