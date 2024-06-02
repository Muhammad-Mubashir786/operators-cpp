#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter a number to check even or odd\n";
	cin>>number;
	if(!(number%2==0))
	{
		cout<<"number is odd";
	}
	else
	{
		cout<<"number is even";
	}
	return 0;
}
