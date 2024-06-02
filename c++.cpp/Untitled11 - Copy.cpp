#include<iostream>
using namespace std;
int main()
{
	int month;
	cout<<"enter a month to find its number of days"<<endl;
	cin>>month;
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			{
				cout<<"31 days"<<endl;
				break;
			}
		case 4:
		case 6:
		case 9:
		case 11:
			{
				cout<<"30 days"<<endl;
				break;
			}
		case 2:
			{
				cout<<"29 or 29 days according to leap year or not"<<endl;
				break;
			}
		default:
			{
				cout<<"invalid input enter between 1-12"<<endl;
				break;
			}
			
		
	}
	return 0;
}
