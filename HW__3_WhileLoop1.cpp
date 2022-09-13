// Write a loop that reads positive integers from standard input
// and that terminates when it reads an integer that is not positive. 
// After the loop terminates, 
// it prints out the sum of all the even integers read, 
// the sum of all the odd integers read,
// a count of the number of even integers read, 
// and a count of the number of odd integers read,
//all separated by exactly one space.
// Declare any variables that are needed.

#include <iostream>
using namespace std;

int num = 1;
int sumeven = 0;
int sumodd = 0;
int evencount = 0;
int oddcount = 0;

int main ()
{
while (num >= 1)
{
    cout << "Enter a number: ";
	cin >> num;
	if ((num % 2 == 0) && (num > 0))
	{
		sumeven += num;
		evencount ++;
	}
	else if ((num > 0))
	{
		sumodd += num;
		oddcount ++;
	}
}
cout << sumeven << " " <<  sumodd << " " << evencount << " " << oddcount;
return 0;
}

