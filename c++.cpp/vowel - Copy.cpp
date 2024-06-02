#include<iostream>
using namespace std;
int main()
{
	char vowel;
	cout<<"enter the alpabet to check whether it is vowel or not"<<endl;
	cin >>vowel;
	if (vowel=='a'||vowel=='A'||vowel=='e'||vowel=='E'||vowel=='o' || vowel=='O'||vowel=='i'||vowel=='I'||vowel=='u'||vowel=='U')
	{
		cout<<"character is a vowel : "<<vowel<<endl;
	}
	else
	{
		cout<<"the alphabet you entered is not a vowel"<<endl;
	}
	return 0;
}
