#include<iostream>
using namespace std;
int main(){
	int digits,sum=0,number;
	cout<<"enter any three digits"<<endl;
	cin >>number;
	while(number > 0)
	{
		digits=number%10;
		sum+=digits;
		number/=10;
	}
	cout<<"sum of digits is "<<sum<<endl;
	return 0;
}

