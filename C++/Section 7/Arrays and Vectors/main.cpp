/* Author: Aidan Fox
*  Udemy Section 7
*  Arrays and Vectors
* 
*  Challenge Problem (Prompt from Dr. Frank Mitropoulos)
* 
*  Declare 2 empty vectors of integers named 
*  vector1 and vector2.
* 
*  Add 10 and 20 to vector1 dynamically using push_back
*  Display the elements in vector1 using the at method as well as its
*  size using the size method
* 
*  Add 100 and 200 to vector2 using push_back
*  Display elements and size similar to vector1
* 
*  Declare an empty 2D vector called vector_2d
* 
*  Add vector1 to vector_2d dynamically using push back
*  Repeat with vector2
* 
*  Display elements in vector_2d using at method
* 
*  Change vector1.at(0) to 1000
* 
*  Display the elements in vector_2d again using at method
* 
*  Display the elements in vector1
* 
*  What did you expect? Did you get what you expected? What do you think happened?
*/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {

	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	// in future projects, I would put this inside a function for QOL and readability

	cout << "vector1 index 0: " << vector1.at(0) << endl;
	cout << "vector1 index 1: " << vector1.at(1) << endl;
	cout << "vector1 size: " << vector1.size() << endl;

	cout << "\n";

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "vector2 index 0: " << vector2.at(0) << endl;
	cout << "vector2 index 1: " << vector2.at(1) << endl;
	cout << "vector2 size: " << vector2.size() << endl;

	cout << "\n";

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "vector_2d index [0][0]: " << vector_2d.at(0).at(0) << endl;
	cout << "vector_2d index [0][1]: " << vector_2d.at(0).at(1) << endl;
	cout << "vector_2d index [1][0]: " << vector_2d.at(1).at(0) << endl;
	cout << "vector_2d index [1][1]: " << vector_2d.at(1).at(1) << endl;

	cout << "\n";

	vector1.at(0) = 1000;

	cout << "vector_2d index [0][0]: " << vector_2d.at(0).at(0) << endl;
	cout << "vector_2d index [0][1]: " << vector_2d.at(0).at(1) << endl;
	cout << "vector_2d index [1][0]: " << vector_2d.at(1).at(0) << endl;
	cout << "vector_2d index [1][1]: " << vector_2d.at(1).at(1) << endl;

	cout << "\n";

	cout << "vector1 index 0: " << vector1.at(0) << endl;
	cout << "vector1 index 1: " << vector1.at(1) << endl;
	cout << "vector1 size: " << vector1.size() << endl;

	

	return 0;
}

/* Post Challenge Thoughts and Notes
* 
*  Initial thoughts: this problem would have been much less
*  tedious using iteration or functions, rather than hard coding
*  vector values line by line. This quickly becomes unreadable
*  with the number of lines used.
* 
*  Having some experience with programming, I knew the change to vector1
*  would not affect the values within vector_2d, as the values themselves
*  were passed to the new 2d vector object, rather than the vector1 object. 
*  In order to apply the changes made to the vector1 object to the vector_2d 
*  object, I would need to update the vector_2d object. I can forsee this 
*  relationship between "parent" and nested "child" vectors causing
*  logical errors in the future.
* 
*  - Aidan Fox, 6-19-2023
*/