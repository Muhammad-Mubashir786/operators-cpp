#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,average;
	cout << "enter your marks of three subjects"<<endl;
	cin >> a>>b>>c;
	average=(a+b+c)/3;
	if (average>80)
	{
		cout <<"welldone chutti kar "<<endl;
	}
	else 
	{
	    cout <<"Shabash bacha tu both taraki kary ga "<<endl;	
	}
	return 0;
}
