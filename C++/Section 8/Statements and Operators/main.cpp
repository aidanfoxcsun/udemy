/* Author: Aidan Fox
*  Section 8
*  Statements and Operators
* 
*  Euros to USD
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	// As of June 22, 2023
	// 1 : 1.1 (EUR : USD)

	const double usdPerEur{ 1.1 };

	double euros{ 0.0 };
	double dollars{ 0.0 };

	cout << "Welcome to the EUR to USD converter!" << endl;
	cout << "Enter the value in Euros: ";
	
	cin >> euros;
	dollars = euros * usdPerEur;

	cout << euros << " EUR is " << dollars << " USD" << endl;
	cout << endl;
	return 0;
}