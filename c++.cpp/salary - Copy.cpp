#include <iostream>
using namespace std;
int main ()
{
	float salary, grade ;
	cout << "enter your salary "<<endl;
	cin>>salary;
	cout<<"enter your grade"<<endl;
	cin>>grade;
	if(grade>15)
	{
		salary=salary+(50*salary/100);
		cout<<"your salary is "<<salary<<endl;
	}
	else 
	{
		salary=salary+(25*salary/100);
		cout<<"your salary is "<<salary<<endl;
	}
	return 0;
}
