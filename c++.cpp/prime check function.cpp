//Implement a user-defined function named isPrime,that takes an integer parameter and returns true if number is prime,
//and false otherwise. Write a program to prompt the user to enter an integer, call the isPrime function to check if 
//it is prime, and display the result.
#include<iostream>
using namespace std;
bool isPrime(int);
int main()
{
	int number;
	cout<<"Enter a number to check whether it is prime or not:"<<endl;
	cin>>number;
	if(isPrime(number))
	{
		cout<<"Number is Prime";	
	}
	else 
	{
		cout<<"Number is not Prime";
	}
}
bool isPrime(int num)
{
	if(num<=1)
	{
		return false;
	}
	if(num==2)
	{
		return true;
	}
	if(num%2==0)
	{
	    return false;
    }
    
}
