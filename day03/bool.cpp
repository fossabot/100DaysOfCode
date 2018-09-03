#include <iostream>

using namespace std;

int main() {

	int val1 = 0;
	int val2 = 0;

	cout << "Please enter an integer for val1: " << endl;
	cin >> val1;
	cout << "Please enter an integer for val2: " << endl;
	cin >> val2;

	const int res = (val1 > val2) ? val1 : val2;

	cout << res << " is the bigger number." << endl;
	
	return 0;
}
