#include <iostream>
using namespace std;

int main() {
  int number, i;
  cout << "Enter a number: ";
  cin >> number;

  i = 1;
  while (i <= number) {
    cout << i << " ";
    i++;
  }
  return 0;
}

