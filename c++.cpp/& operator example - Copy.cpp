#include<iostream>
using namespace std;
int main()
{
    int number1,number2;
    cout<<"check for number in range like 10 to 20"<<endl;
    cin>>number1>>number2;
    if (number1>10 && number2<20)
    {
        cout<<"number in range";
    }
    else 
    {
        cout<<"number out of range";
    }
    
}