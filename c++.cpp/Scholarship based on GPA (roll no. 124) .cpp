/*Question: Write a C++ code that takes the students GPA as input and assigns the appropriate scholarship
level based on the criteria. After processing the input, your program should print out the
scholarship level.*/
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
	else if (GPA>=3.0 && GPA<3.5) // 3.5 written to include 3.49 
	{
		cout << "Congratulations! You are eligible for \t\t\n Silver Scholarship" << endl;
	}
	else if (GPA>=2.5 && GPA<3) // 3 written to include 2.99
	{
	cout << "Congratulations! You are eligible for \t\t\n Bronze Scholarship" << endl;
    }
    else 
    {
    	cout << "Sorry you are not eligible for any scholarship.\n work hard!" << endl;
	}
	return 0;
}
