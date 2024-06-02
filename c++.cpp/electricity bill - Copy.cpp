#include <iostream>
using namespace std;
int main()
{
	float previous_units, current_units,units_consumed, total_bill;
	cout << "enter previous_units"<<endl;
	cin >>previous_units;
	cout << "enter current_units"<<endl;
	cin >>current_units;
	units_consumed=previous_units-current_units;
	if(units_consumed<=300)
	{
		total_bill=units_consumed*2;	
	}
	
	else  if(units_consumed>300 && units_consumed<=500)
	{
		total_bill=units_consumed*5;	
	}
	else
	{
		total_bill=units_consumed*7;
	}
	total_bill=total_bill+150;// 150 is meter rent
	if (total_bill>=2000)
	{
		total_bill=total_bill+((total_bill*5)/100);
	}
    cout << "total bill is: "<<total_bill<<endl;
    return 0;
}
