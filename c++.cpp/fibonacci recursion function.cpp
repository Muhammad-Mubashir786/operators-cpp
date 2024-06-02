#include<iostream>
using namespace std;
int fibonacci(int);
int main(){
    int number;
    cout<<"Enter a number "<<endl;
    cin>>number;
    cout<<"The fibonacci sequence of term "<<number<<" is: "<<fibonacci(number);
    return 0;
}
int fibonacci(int num)
{
    if (num<2)
    {
        return 1;
    }
    return fibonacci(num-2)+fibonacci(num-1);
}