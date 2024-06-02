#include<iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"enter letter either a m z"<<endl;
    cin>>letter;
    while (letter!='#')
    {
        if (letter>='a' && letter<='z')
        {
            switch (letter)
            {
            case 'a':
            cout<<"1";
                break;
            case 'm':
            cout<<"2";
                break;
            case 'z':
            cout<<"3";
                break;
            default:
            cout<<"invlaid letter";
                break;
            }
        }
        
    }
    return 0;
}