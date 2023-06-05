/* Author: Aidan Fox
*  calculate area of a room in square feet.
*/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	cout << "Enter the width of the room: ";

	int roomWidth{ 0 };
	cin >> roomWidth;
	
	cout << "Enter the lentgh of the room: ";
	
	int roomLength{ 0 };
	cin >> roomLength;
	
	cout << "The area of the room is " << roomWidth * roomLength << 
		" square feet." << endl;

	return 0;
}