/*
*
* * * LAB 5 PART 1 * * * 
* Calculator using user input *
* Please clean and/or rebuild solution before each part *
* No AI was used for this lab
* 
*/
#include <iostream> // Include for cout/cin

using namespace std;

int main() {
	// Declare variable with double indentifier for numbers and char for the operation
	double num1; // First operand
	double num2; // Second operand 
	double result = 0; // Sum of num1 and num2
	char opr; // Operation sign

	// Prompt user for operation and receive input
	cout << "Insert Operation: " << endl;
	cin >> num1 >> opr >> num2; 

	// Computation using switch statement
	switch (opr) {

	case '+': // char value as input to indicate which case to perform 
		result = num1 + num2; // Perform opertion for result 
		cout << num1 << " " << opr << " " << num2 << " = " << result; // Print
		break; // End to prevent conflict with other cases 

	case 'x': // Continue to next case to receive same output 
	case 'X':
	case '*':
		result = num1 * num2;
		cout << num1 << " " << opr << " " << num2 << " = " << result;
		break; // Don't continue
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