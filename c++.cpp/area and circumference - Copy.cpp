#include <iostream>
using namespace std;
int main()
{
    float radius,area,circumference;
	int choice;
    cout<<"enter radius"<<endl;
    cin>>radius;
    cout<<"enter choice as 1 or area calculation and 2 for circumference calculation"<<endl;
    cin>>choice;
    if (choice==1)
    {
       area=3.14*radius*radius; //pi=3.14
       cout<<"area="<<area<<endl;
    }
    else if (choice==2)
    {
       circumference=2*3.14*radius;
       cout<<"circumference="<<circumference<<endl;
    }
       return 0;
}
