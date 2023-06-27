/* Author: Aidan Fox
*  Section 9
*  Controlling Program Flow
* 
*  Shipping Cost Calculator
* 
*  Ask the user for package dimension in inches
*  length, width, height - should be integers
* 
*  All dimensions must be 10 inches or less or we cannot ship it
*  
*  Base Cost $2.50
*  If package volume is greater than 100 cubic inches, there is a 10% surcharge
*  If package volume is greater than 500 cubic inches, there is a 25% surcharge
* 
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	const float baseCost{2.5f};

	const int tierOneThreshold{ 100 };
	const int tierTwoThreshold{ 500 };

	const int maxDimensionLength{ 10 };

	const float tierOneSurcharge{ 0.1f };
	const float tierTwoSurcharge{ 0.25f };
	int length{}, width{}, height{};

	cout << "Welcome to the Shipping Cost Calculator." << endl;
	cout << "\n";
	cout << "Please enter the dimensions of your package, in inches, separated by spaces: ";
	cin >> length >> width >> height;
	cout << "\n";

	int volume{ length * width * height };

	if (length <= maxDimensionLength || width <= maxDimensionLength || height <= maxDimensionLength) {

		cout << "Volume: " << volume << " cubic inches\n" << endl;

		if (volume > tierTwoThreshold) {
			cout << "Base Cost:  $" << baseCost << endl;
			cout << "Surcharge:  $" << baseCost * tierTwoSurcharge << endl;
			cout << "Total Cost: $" << baseCost + (baseCost * tierTwoSurcharge) << endl;
		}
		else if(volume > tierOneThreshold) {
			cout << "Base Cost:  $" << baseCost << endl;
			cout << "Surcharge:  $" << baseCost * tierOneSurcharge << endl;
			cout << "Total Cost: $" << baseCost + (baseCost * tierOneSurcharge) << endl;
		}
		else {
			cout << "Base Cost:  $" << baseCost << endl;
			cout << "Surcharge:  $0" << endl;
			cout << "Total Cost: $" << baseCost << endl;
		}

	}
	else {

		cout << "Sorry! All dimensions must be " << maxDimensionLength <<  " inches or less to ship!" << endl;

	}

	return 0;
}