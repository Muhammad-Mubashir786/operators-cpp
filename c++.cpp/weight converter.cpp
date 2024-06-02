#include<iostream>
using namespace std;
int main()
{
	float kilogram,pound;
	int choice;
		do
	{
	cout<<"Enter 1 for kilogram to pound \nEnter 2 to convert pound to kilogram \nEnter 3 to exit program "<<endl;
	cin>>choice;

	switch(choice)
	{
		case 1:
			{
				cout<<"enter weight in kilogram \n";
				cin>>kilogram;
				pound=kilogram*2.20462;
				cout<<"Pounds: "<<pound<<endl;
				break;
			}
		case 2:
			{
			    cout<<"enter weight in pounds\n ";
				cin>>pound;
				kilogram=pound/2.20462;
				cout<<"kilogram:  "<<kilogram<<endl;
				break;
		case 3:
			{
				cout<<"";
				break;
			}
				
			}
		default:
			{
				cout<<"invalid choice"<<endl;
			}
		
	}
    }
    while(choice!=3);
	{
	   cout<<"Goodbye";	
	}
}
