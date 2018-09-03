#include <iostream>

using namespace std;

int main() {

	float fval = 1.2345;

	/*
	 *	methods of ival1 and ival2 are outdated
	 *	rather use the method of ival3
	 * */
	int ival1 = int(fval);
	int ival2 = (int) fval;
	int ival3 = static_cast<int>(fval);

	cout << "Starting float value: " << fval << endl;
	cout << "int(fval) value: " << ival1 << endl;
	cout << "(int) fval value: " << ival2 << endl;
	cout << "static_cast<int>(fval) value: " << ival3 << endl;

	return 0;
}
