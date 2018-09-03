#include <iostream>

using namespace std;

int main() {
	const float PI = 3.14159;
	int r;

	cout << "Volume calculation of a ball" << endl;
	cout << "Enter the radius of the ball you want to calculate" << endl;
	cin >> r;
	if (cin.fail()) {
		cerr << "Wrong input, please only use integers" << endl;
		cerr << "Programm will terminate." << endl;
		return 1;
	}

	cout << "The Volume is: " << PI*r*r << endl;

	return 0;
}
