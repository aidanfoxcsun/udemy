/* Author: Aidan Fox
*  Section 8
*  Statements and Operators
* 
*  Average of 3 numbers
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int total{};
	int num1{}, num2{}, num3{};
	const int count{ 3 };

	cout << "Enter 3 integers separated by spaces: ";
	cin >> num1 >> num2 >> num3;
	total = num1 + num2 + num3;

	double average{0.0};
	average = static_cast<double>(total) / count;
	// average = (double)total/count;  OLD METHOD!

	cout << "Your three numbers are: " << num1 << ", " << num2 << ", " << num3 << endl;
	cout << "The sum of your numbers is: " << total << endl;
	cout << "The average of your three integers is: " << average << endl;
	return 0;
}