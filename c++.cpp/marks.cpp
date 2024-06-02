#include <iostream>
using namespace std ;
int main ()
{
	int marks;
	cout << "Enter your marks"<<endl;
	cin >> marks;
	if (marks>=75)
	{
		cout <<"Congratulations your score is A"<<endl;
	}
	else if (marks>=60)
	{
		cout <<"Well done your score is B"<<endl;
	}
	else if (marks>=45)
	{
		cout << "your score is C"<<endl;
	}
	else if (marks>=30) 
	{
		cout <<"your score is D"<<endl;
	}
	else
	
		cout <<"first attemp in learning"<<endl;
	
	return 0;
	
}
