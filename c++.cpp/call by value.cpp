#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void swapReferancepointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 9;
    cout << "sum of 5 and 9 is " << sum(5, 9)<<endl;
    cout << "swap of 5 and 9 is " << endl;
    swapReferancepointers(&x, &y);
    cout<<"After swaping "<<x<<" and "<<y<<endl;
    return 0;
}