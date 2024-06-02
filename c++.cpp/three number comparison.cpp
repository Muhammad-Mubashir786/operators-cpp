#include<iostream>
using namespace std;
int main()
{
    int number1,number2,number3;
    cout<<"Enter any three numbers to check whether all numbers are equal or not"<<endl;
    cin>>number1>>number2>>number3;
    if (number1==number2)
    {
        if (number1==number3)
        {
            cout<<"All numbers are equal";
        }
        else
        {
            cout << "All numbers are not equal";
        }
        
    }
    // else if (number2==number3)
    // {
    //     if (number2==number1)
    //     {
    //         cout << "All numbers are equal";
    //     }
        
    // }
    else
    {
        cout<<"Numbers are not equal";
    }
    
}