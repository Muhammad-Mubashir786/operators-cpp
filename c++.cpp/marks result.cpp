#include <iostream>
using namespace std;
int main ()
{
    int marks;
	cout << "Enter your marks"<< endl;
	cin>> marks;
	if (marks>=90 && marks<=100)	
	{
		cout << "A Grade"<<endl;
	}
	else if (marks>=70)	
	{
		cout << "B Grade"<<endl;
	}
	else if (marks>=50)	
	{
		cout << "C Grade"<<endl;
	}
	else 
	{
	  	cout << "D Grade"<<endl;
	}
	return 0;
}
