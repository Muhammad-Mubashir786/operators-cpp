//Write a program to demonstrate the usage of built-in functions in C++. 
//Implement a simple program that uses at least three different built-in functions from 
//the C++ standard library, such as std::cout, std::cin, and std::endl

#include<iostream>
int main ()
{
	int number;
	//std::cout to print message
	std::cout<<"Enter a number"<<std::endl; //std::endl to end line
	//std::cin to take input from user
	std::cin>>number;
	std::cout<<"Number you entered is: "<<number<<std::endl;
	
}
