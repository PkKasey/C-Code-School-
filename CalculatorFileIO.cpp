/*
*
* * * LAB 5 PART 2 * * *
* Calculator using file input *
*
*/
#include <iostream> // Include for cout/cin
#include <fstream> // Include for ifstream

using namespace std;

int main() {
	// Declare variables
	double num1; // First operand 
	double num2; // Second operand
	double result = 0; // Sum of num1 and num2 
	char opr; // Operation sign 
	ifstream infile; // create object infile with class ifstream

	infile.open("input.txt"); // open the file that contains expression

	if (!infile) { // return error if no file 

		cout << "File error.";
		return 1; // Return 1 to indicate error
	}

	infile >> num1 >> opr >> num2; // Read input from file 
	infile.close(); // Close file when done to prevent unnessary memory

	// Compute and print result using switch 
	switch (opr) {

	case '+':
		result = num1 + num2;
		cout << num1 << " " << opr << " " << num2 << " = " << result;
		break;

	case 'x':
	case 'X':
	case '*': // Account for all cases in case file contains different content
		result = num1 * num2;
		cout << num1 << " " << opr << " " << num2 << " = " << result;
		break;
	case '/':
		result = num1 / num2;
		cout << num1 << " " << opr << " " << num2 << " = " << result;
		break;
	case '-':
		result = num1 - num2;
		cout << num1 << " " << opr << " " << num2 << " = " << result;
		break;
	}

	return 0; // End Code
}