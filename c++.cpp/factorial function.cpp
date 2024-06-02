//Define a user-defined function named factorial that takes an integer parameter and returns its factorial.
//Write a program to prompt the user to enter an integer, call the factorial function to compute its factorial,
//display the result
#include <iostream>
using namespace std;
int factorial(int); // declare
int main()
{
	int number,result;
	cout<<"enter a number ";
	cin>>number;
	cout<<"Factorial of "<<number<<" is "<<factorial(number); //call
}

int factorial(int number) //define
{
	int factorial=1;
	
	for(int i=1;i<=number;i++)
	{
		factorial*=i;
	}
	return factorial;
}
