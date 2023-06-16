/* Author: Aidan Fox
*  Section 6
*  Challenge
* 
*  Problem:
* 
*  Carpet Cleaning Service
*  Charges: 
*		$25 per small room
*		$35 per large room
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

	const double taxRate{ 0.06 };
	const double chargePerSmallRoom { 25 };
	const double chargePerLargeRoom{ 35 };
	const int validDays{ 30 }; //days

	int numberOfSmallRooms{0};
	int numberOfLargeRooms{ 0 };

	cout << "Welcopme to Aidan's Carpet Cleaning Service!" << endl;
	cout << "\n";

	cout << "Please Enter the number of  small rooms you would like cleaned: ";
	cin >> numberOfSmallRooms;
	cout << "Please Enter the number of  large rooms you would like cleaned: ";
	cin >> numberOfLargeRooms;

	cout << "\n";

	int cost = (numberOfSmallRooms * chargePerSmallRoom) +(numberOfLargeRooms*chargePerLargeRoom);
	double tax = taxRate * cost;
	double total = tax + cost;

	cout << "Estimate for Carpet Cleaning Serivce: " << endl;
	cout << "\n";
	cout << "Number of small rooms: " << numberOfSmallRooms << endl;
	cout << "Number of large rooms: " << numberOfLargeRooms << endl;
	cout << "Price per small room: $" << chargePerSmallRoom << endl;
	cout << "Price per large room: $" << chargePerLargeRoom << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "=================================" << endl;
	cout << "Total Estimate: $" << total << endl;
	cout << "This estimate is valid for " << validDays << " days." << endl;

	return 0;
}