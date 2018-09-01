#include <iostream>

using namespace std;

/* function prototypes: Because "foo" was 
 * initialized after the "main" function, therefore
 * the compiler wouldn't know that the function foo
 * actually exists.
 */

void foo();


int main() {
	
	foo();

	return 0;
}

void foo() {
	cout << "foo was executed." << endl;
}
