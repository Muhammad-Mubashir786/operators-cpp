#include <iostream>
using namespace std;

int main()
{
    int number, next_number, first_number = 0, second_number = 1; // Initialize first two Fibonacci numbers
    cout << "Enter a number to find its corresponding Fibonacci number: ";
    cin >> number;

    // Calculate Fibonacci number
    for (int i = 0; i < number; ++i)
    {
        next_number = first_number + second_number;
        first_number = second_number;
        second_number = next_number;
    }

    // Print the Fibonacci number
    cout << "Fibonacci number at position " << number << " is: " << first_number << endl;

    return 0;
}
