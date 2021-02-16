#include <iostream>
using namespace std;

int main() {
  int value;		// value is some positive number n
	double total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numbers
	double mean;		// the average of the first n positive numbers
  int m;

	cout << "Please enter a positive integer" << endl;
	cin >> value;

  cout << "Please enter a positive integer" << endl;
	cin >> m;

	if (value > 0)
	{
		for (number = value; number <= m; number++)
		{
			total = total + number;
		}	// curly braces are optional since there is only one statement

		mean = total / (m - value + 1);	// note the use of the typecast
													// operator here 
		cout << "The mean average of the positive integers is " << mean << endl;
	}
	else
		cout << "Invalid input - integer must be positive" << endl;

}