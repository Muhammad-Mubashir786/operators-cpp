#include <iostream>
using namespace std;
int main()
{
	int salary;
	cout <<"enter your salary"<<endl;
	cin>>salary;
	if(salary>=20000)
	{
		salary=salary-((salary*7)/100);
	}
	else if(salary>=10000)
	{
		salary=salary-1000;
	}
	else
	{
		salary=salary;
	}
	cout<<"your salary is: "<<salary;
	return 0;
}
