#include <iostream>
using namespace std;
int main ()
{
	float GPA;
	cout << "Enter your GPA" << endl;
	cin >> GPA;
	if (GPA>=3.5 && GPA<=4)
	{
		cout << "Congratulations! you are eligible for \t\t\n Gold Scholarship" << endl;
	}
	else if (GPA>=3.0 && GPA<=3.5)
	{
		cout << "Congratulations! You are eligible for \t\t\n Silver Scholarship" << endl;
	}
	else if (GPA>=2.5 && GPA<3)
	{
	cout << "Congratulations! You are eligible for \t\t\n Bronze Scholarship" << endl;
    }
    else 
    {
    	cout << "Sorry you are not eligible for any scholarship.\n work hard!" << endl;
	}
	return 0;
}





