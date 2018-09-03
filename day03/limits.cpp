#include <iostream>
#include <limits>

using namespace std;

int main() {

	int max = numeric_limits<int>::max();
	int min = numeric_limits<int>::min();
	int sign = numeric_limits<int>::is_signed;
	int bitcount = numeric_limits<unsigned int>::digits;

	/*
	 *	signed int => 31 bits because the algebraic sign isn't accounted for in here
	 *	unsigned int => 32 bits due to mentioned reason
	 *	sign = 1 - if datatype is signed
	 *	sign = 0 - if datatype is unsigned
	 *
	 * */

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Signed? " << sign << endl;
	cout << "Bitcount? " << bitcount << endl;

	return 0;
}
