#include <iostream>
#include <iomanip>
#include "myMath.h"

using namespace std;
// Steps changed to 0.25 

int main() {
	cout << "x" << "         " << "Exp (x)" << "   " << "Sqrt(x)" << endl; // header for table

	for (double x = 0.0; x <= 2.0; x += 0.25) { // set range for table
		cout << fixed << setprecision(4) << x << "    " << Exp(x) << "    " << Sqrt(x) << endl;  // Print Exp and Sqrt for x in range with 4 decimal places
	}

	return 0;
}