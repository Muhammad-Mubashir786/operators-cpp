#include <iostream >  
#include <cstdlib >  
#include<time.h> 
using namespace std;  
int main()
{int num;  
int guess;
 
bool done;
num = (rand() + time(0))% 100;  // num = ??
done = false;
while (!done)
{
cout << "Enter an integer greater"
<< " than or equal to 0 and "
<< "less than 100: " <<endl;  
cin >> guess;
cout << endl;
if (guess == num)
{
cout << "You guessed the correct "
<< "number." << endl;  
done = true;
}
else
if (guess < num)
cout << "Your guess is lower "
<< "than the number.\n"
<< "Guess again!" << endl;  
else
cout << "Your guess is higher "
<< "than the number.\n"
<< "Guess again!" << endl;
}

}
