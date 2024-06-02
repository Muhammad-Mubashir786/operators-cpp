#include<iostream>
using namespace std;
int factorial(int);
int main(){
    int number;
    cout<<"Enter a number to find its factorial"<<endl;
    cin>>number;
    cout<<"The factorial of "<<number<<" is: "<<factorial(number)<<endl;
    return 0;
}
int factorial(int num)
{
    if (num<=1)
    {
        return 1;
    }
    return num * factorial(num-1);
    
}