#include<iostream>
using namespace std;
int main()
{
	int table;
	int number;
	cout <<"enter a number you want to get its table"<<endl;
	cin  >> table;
	cout <<"table of "<<table<<" is: "<<endl;
	for(int number=1;number<=10;number++)
	{
		cout <<table<<"*"<<number<<"="<<table*number<<endl;
	}
    return 0;
}
