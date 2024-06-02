#include <iostream>
using namespace std;
int power(int,int);
int main()
{
	int base,exponent;
	cout<<"enter a number ";
	cin>>base;
	cout<<"enter exponent value ";
	cin>>exponent;
	int result;
	result=power(base,exponent);
	cout<<result;
}
int power(int a,int b)
{
	int power=1;
for(int i=0;i<b;i++)
{
	power*=a;
}
return power;

}
