#include <iostream>
using namespace std;
int main()
{
    int choice;
    float celsius, fehrenheit, temp;
    cout << "enter 1 for celcius to fehrenhiet and 2 for fehrenheit to celcius" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "enter temp in celcius" << endl;
        cin >> temp;
        fehrenheit = (9.0 / 5.0) * temp + 32;
        cout << "temp is fehrenhiet is: " << fehrenheit << endl;
        break;
    case 2:
        cout << "enter temp in fehrenheit" << endl;
        cin >> temp;
        celsius = (5.0 / 9.0) * (temp - 32);
        cout << "temp is celsius is: " << celsius << endl;
        break;
    default:
        cout << "invalid " << endl;
        break;
    }
    return 0;
}