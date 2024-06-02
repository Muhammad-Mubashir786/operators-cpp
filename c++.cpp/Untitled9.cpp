#include <iostream>
using namespace std;

int main() {
    int number, i = 0, j = 1, next;
    
    cout << "Enter a number to find its Fibonacci sequence: ";
    cin >> number;

    cout << "Fibonacci sequence up to " << number << " is: ";

    while (i <= number) {
        cout << i << " ";
        next = i + j;
        i = j;
        j = next;
    }

    cout << endl;
    return 0;
}

