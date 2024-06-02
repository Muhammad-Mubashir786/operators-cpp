#include<iostream>
using namespace std;
int main()
{
	int number, factorial=1;
	cout<<"enter a number to find factorial"<<endl;
	cin>>number;
	for(int i=number;i>0;i--)
	{
		
		factorial*=i;
	}
	cout<<"factorial of "<<number << " is "<<factorial<<endl;
	return 0;
}
