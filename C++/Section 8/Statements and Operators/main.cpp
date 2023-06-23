/* Author: Aidan Fox
*  Section 8
*  Statements and Operators
* 
*  Challenge
* 
*  Write a program that asks the user to enter the following:
*  An integer representing the number of cents
*  You may assume that the number of cents entered 
*  is greater than or equal to zero.
*  This program should then display how to provide change to that user.
* 
*  Sample run:
* 
*  Enter an amount in cents: 92
*  You can provide this change as follows:
*  Dollars: 0
*  Quarters: 3
*  Dimes: 1
*  Nickels: 1
*  Pennies: 2
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	const int dollarVal{ 100 }; // just for readability's sake
	const int quarterVal{ 25 };
	const int dimeVal{ 10 };
	const int nickelVal{ 5 };
	const int pennyVal{ 1 };

	int userAmount{};

	int dollar{}, quarter{}, dime{}, nickel{}, penny{};

	cout << "Enter an amount is cents: ";
	cin >> userAmount;

	// Probably more efficient to put this in a function
	if (userAmount >= dollarVal) {
		dollar = userAmount / dollarVal;
		userAmount %= dollarVal;
	}
	if (userAmount >= quarterVal) {
		quarter = userAmount / quarterVal;
		userAmount %= quarterVal;
	}
	if (userAmount >= dimeVal) {
		dime = userAmount / dimeVal;
		userAmount %= dimeVal;
	}
	if (userAmount >= nickelVal) {
		nickel = userAmount / nickelVal;
		userAmount %= nickelVal;
	}
	penny = userAmount;

	cout << "You can provide this change as follows: " << endl;
	cout << "Dollars : " << dollar << endl;
	cout << "Quarters: " << quarter << endl;
	cout << "Dimes   : " << dime << endl;
	cout << "Nickels : " << nickel << endl;
	cout << "Pennies : " << penny << endl;

	return 0;
}

// Modulo made this challenge much more simple and time efficient to achieve than it would've been without it