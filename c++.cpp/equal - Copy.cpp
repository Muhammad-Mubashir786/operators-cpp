#include <iostream>
using namespace std;
int main ()
{
	int number1,number2,number3;
	cout<<"enter three numbers"<<endl;
	cin>>number1>>number2>>number3;
	if(number1==number2)
    {
    	if (number2==3)
    	{
    		cout<<"all numbers are equal"<<endl;
		}
	}
	else if(number2==number1)
	{
		if(number2==number3)
		{
		    cout<<"all numbers are equal"<<endl;
		}
		else if(number3==number1)
		{
		if(number3==number2)
			{
				cout<<"all numbers are equal"<<endl;
			}
		}
	}
	else 
	{
		cout<<"numbers are not equal"<<endl;
	}
	return 0;
}
