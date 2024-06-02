#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int hour,min,s;
    for(hour=0;hour<24;hour++)
    {
    	for(min=0;min<60;min++)
    	{
    		for(s=0;s<60;s++)
    		{
    			cout<<setw(2)<<hour<<":";
    			cout<<setw(2)<<min<<":";
    			cout<<setw(2)<<s<<":";
                cout<<endl;
			}
		}
	}
}
