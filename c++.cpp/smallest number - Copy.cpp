#include<iostream>
using namespace std;
int main ()
{
    int number1,number2,number3;
	cout << "enter three numbers"<<endl;
	cin>>number1>>number2>>number3;
	if (number1<number2)
	{
	    if(number1<number3)
		{
			cout<<"number smallest is: "<<number1<<endl;
		}
	
	}	
	else if(number2<number1)
	{
		if (number2<number3)
		{	
			cout<<"smallest number is : "<<number2<<endl;
		
		}
		 else 
	    {
		cout<<"number smallest is: "<<number3<<endl;
	    }	
		
	}
	
	return 0;
}
