#include "myMath.h" // Header files for functions
#include <cmath> // Include math for absolute value function
#include <iostream>

using namespace std;

double Exp(double x) {

	int max = 20;
	double x_term = 1; // Initialize each term in the following calculation
	double sum = 1;
	int counter = 1; // Initialize x_term, sum, and counter as 1 

	while (counter <= 20) { // Run this loop until numbers become too small to be significant

		// Section to compute the approximation of e 
		x_term = x_term * (x / counter); 
		sum = sum + x_term; // Approximate the value using a series 
		counter++; // Increment counter by one 
	}

	return sum;
}

double Sqrt(double x) {
	bool approximation = true;

	double rxi = 30.0;
	double rxi_1; // Initial guess and updated estimate
	double ai;
	double bi; // Initializing variable for calcutions 
	double sum = 0.0;
	double e = 0.00001; // initialize sum and tolerance (error)

	if (x < 0) { // Square roots can not be negative
		cout << "Invalid input" << endl; 
	} 
	else if (x == 0) { // 0 squared is 0 
		sum = 0.0; 
	}
	else {
		 do {
			rxi_1 = rxi; // Code for computing the square root approximation
			ai = (x - (rxi_1 * rxi_1)) / (2 * rxi_1);
			bi = rxi + ai;
			rxi = bi - ((ai * ai) / (2 * bi));
			} while (abs(rxi - rxi_1) > e);
		
		 sum = rxi; // Sum when guess is close enough to the correct approximation
	}
	return sum; // Return sum to main
}
