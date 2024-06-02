#include <iostream>
using namespace std;
int sum(int,int);
int main()
{
	int z;
	z=sum(5,3);
	cout<<z;
}
int sum(int a,int b)
{
	int s=0;
	s=a+b;
	return s;
}
