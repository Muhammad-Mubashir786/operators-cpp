#include<iostream>
using namespace std;
int volumeCylinder(int radius, int height)
{
    return (3.14 * radius * radius * height);
}
int volumeRectangle(int lenght, int breath, int height)
{
    return (lenght * breath * height);
}
int volumeCube(int a)
{
    return (a * a * a);
}
int main(){
    cout << "The volume of cylinder " << volumeCylinder(7, 9) << endl;
    cout << "The volume of rectangle is " << volumeRectangle(7,8,9) << endl;
    cout << "The volume of cube " << volumeCube(7) << endl;

    return 0;
}