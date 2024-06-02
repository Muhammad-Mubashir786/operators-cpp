#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter your marks"<<endl;
	cin>>marks;
	if (marks>=90)
	{
		cout <<"A grade"<<endl;
	}
	else if (marks>=80 )
	{
		cout <<"B grade"<<endl;
	}
	else if (marks>70)
	{
		cout <<"C grade"<<endl;
	}
	else if (marks>60)
	{
		cout <<"D grade"<<endl;
	}
	else 
	{	
		cout <<"F grade"<<endl;
	}
	return 0;
}
