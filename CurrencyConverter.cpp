/*
*
* * * LAB 5 PART 3 * * * 
* Currency Converter using file input *
*
*/
#include <iostream> // Include for cout/cin
#include <fstream> // Include for ifstream
#include <iomanip> // Include for fixed and setprecision

using namespace std; 

int main() { 
	// Declare variables 
	double dollars; // US Currancy 
	double euros; // EU Currancy
	double rate; // Conversion rate
	ifstream infile; // create object infile with class ifstream
	 
	// Input Section: Prompt user and receive euro input 
	cout << "How many Euros? " << endl; 
	cin >> euros; 

	infile.open("conversion.txt"); // Open file that contains conversion

	if (!infile) { // Return error if no file 

		cout << "File error.";
		return 1; // Return 1 to indicate error
	}

	infile >> rate; // Get input for rate from file 
	dollars = euros * rate; // Convert euros into dollars 
	cout << fixed << setprecision(2) << "Equivalent value in USD: $" << dollars << endl; // Print final result with two decimal places 
	infile.close(); // Close file

	return 0; // End Code
}