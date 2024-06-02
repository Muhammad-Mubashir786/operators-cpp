/*Task : Write a C++ -Program to calculate area and Perimeter of the 
triangle and rectangle.*/
#include <iostream>
using namespace std;
int main()
{
    //triangle_variable
	float area_triangle,tri_base,tri_height,peri_triangle,a,b,c;
	//rectangle_variable
	float area_rectangle,width,vertical_height,peri_rectangle; 
	cout<<"Enter base and  height for triangle: "<<endl;
	cin>>tri_base>>tri_height;
	cout<<"Enter three sides of triangle: "<<endl;
    cin>>a>>b>>c;
    //calculation 
    area_triangle=0.5*tri_base*tri_height;
    peri_triangle=a+b+c;
    cout<<"Area of triangle: " <<area_triangle<<endl;
    cout<<"Perimeter of triangle: "<<peri_triangle<<endl;
    cout<<"Enter width and height of rectangle: "<<endl;
    cin>>width>>vertical_height;
    //calculation 
    area_rectangle=width*vertical_height;
    peri_rectangle=2*(width+vertical_height);
    cout<<"Area of rectangle: " <<area_rectangle<<endl;
    cout<<"Perimeter of the rectangle: "<<peri_rectangle<<endl;
    return 0;
}
