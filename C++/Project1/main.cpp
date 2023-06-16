/* Author: Aidan Fox
*  Section 6
*  Constants
* 
*  Problem:
* 
*  Carpet Cleaning Service
*  Charges $30 per room
*  Sales Tax rate is 6%
*  Estimates Valid for 30 days
*  
*  Prompt user for number of rooms they would like cleaned.
*  Provide an estimate.
* 
*/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	const double taxRate = 0.06;
	const int chargePerRoom = 30;
	const int validDays = 30;

	int numberOfRooms;

	cout << "Please Enter the number of rooms you would like cleaned: ";
	cin >> numberOfRooms;

	int cost = numberOfRooms * chargePerRoom;
	double tax = taxRate * cost;
	double total = tax + cost;

	cout << "Estimate for Carpet Cleaning Serivce: " << endl;
	cout << "\n";
	cout << "Number of rooms: $" << numberOfRooms << endl;
	cout << "Price per Room: $" << chargePerRoom << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "=================================" << endl;
	cout << "Total Estimate: $" << total << endl;
	cout << "This estimate is valid for " << validDays << " days." << endl;

	return 0;
}