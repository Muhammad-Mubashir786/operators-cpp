#include<iostream>
using namespace std;
float area(float);
int main()
{
	float radius;
	cout<<"enter radius of circle ";
	cin>>radius;
	float result=area(radius);
	cout<<"area is "<<result;
}
float area(float radius)
{
	int r;
	float pi=3.14;
	r=pi*radius*radius;
	return r;
}
