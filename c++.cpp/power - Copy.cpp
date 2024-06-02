#include<iostream>
using namespace std;
int main()
{
	int base,exponent;
	cout <<"enter a power "<<endl;
	cin>>base;
	cout <<"enter exponent"<<endl;
	cin>>exponent;
	int power=1;
	for(int i=0;i<exponent;i++)
	{
	power*=exponent;
	}
			cout<<"result "<<power<<endl;

	return 0;
}
