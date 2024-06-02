#include <iostream>
using namespace std;
int main()
{
	int number;
	int sum=0;
	cout<<"enter a natural number"<<endl;
	cin>>number;
	for(int i=1;i<=number;i++)
	{
		sum+=i;
	}
	cout<<"sum of "<<number<<" is "<<sum<<endl;
	return 0;
}
