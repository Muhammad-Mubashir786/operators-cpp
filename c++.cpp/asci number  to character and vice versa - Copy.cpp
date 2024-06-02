#include<iostream>
using namespace std;
int main()
{
    int number,option;
    char letter;
    cout << "Enter 1 to convert asci number to character \nEnter 2 to convert character into asci" << endl;
    cin>>option;
    switch (option)
    {
    case 1:
        cout<<"Enter a number"<<endl;
        cin>>number;
        cout<<"character is: "<< char(number);
        break;
    case 2:
        cout << "Enter a letter" << endl;
        cin >> letter;
        cout << "number is: " << int(letter);
         break;
    default:
        cout<<"invalid choice";
        break;
    }
    return 0;
}