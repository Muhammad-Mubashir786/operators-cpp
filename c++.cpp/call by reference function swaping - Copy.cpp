#include<iostream>
using namespace std;
// void swapPointer(int *a,int *b); // using pointers
void swapReferanceVar(int &a,int &b); // using reference variable
int main()
{
    int x,y;
    cout<<"Enter two value x,y to swap them "<<endl;
    cin>>x>>y;
    cout<<"The value of x="<<x<<" and the value of y="<<y<<" before swaping "<<endl;
    swapReferanceVar(x, y);
    cout<<"The value of x="<<x<<" and the value of y="<<y<<" After swaping "<<endl;
    return 0;
}
// void swapPointer(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
void swapReferanceVar(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
#include<iostream>
using namespace std

int main(){

return 0;
}
#include<iostream>
using namespace std

int main(){

return 0;
}