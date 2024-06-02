#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,digitCount,number;
	cout << "Enter any three numbers"<<endl;
	cin >>a>>b>>c;
	if (a>b)
	{
		if(a>c)
		{
			cout << "The largest number is: "<<a<<endl;
		}
	    else
        {
	    cout << "The largest number is: "<<c<<endl;
	    }
    }
	else if (b>c)
		{
		    cout << "The largest number is: "<<b<<endl;	
		}
	
	else 
	cout << "The largest number is: "<<c<<endl;	
	
    if (a,b,c>0)
    {
    	cout << "numbers are positive "<<endl;
	}
	if (a,b,c == 0)
	{
        digitCount = a,b,c;
    } else
	{
    
        while (number != 0) {
            number /= 10; 
            digitCount++; 
        }
    }

  
    cout << "The number has " << digitCount << " digit(s)." << endl;
}
