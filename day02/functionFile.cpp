#include <iostream>
#include "new.hpp"

using namespace std;

void printStuff() {
	cout << "Function printStuff is printing stuff." << endl;
}

void addStuff(int a, int b) {
	int x = a+b;
	cout << "a + b = " << x << endl;
}
