#include <iostream>
#include <typeinfo>

using namespace std;

int main() {

	/*
	 *	auto provides a type inference, which can only work if the variable is
	 *	initialized as it is declared, the compiler can identify the type from the 
	 *	initialization, as the output shows the variables i and a both are integers.
	 * */

	int i = 5;
	auto a = 5;

	cout << "Value of i: " << i << endl;
	cout << "Type of i: " << typeid(i).name() << endl;
	cout << "------------------------------" << endl;
	cout << "Value of a: " << a << endl;
	cout << "Type of a: " << typeid(a).name() << endl;

	cout << endl;
	cout << "==============================" << endl;
	cout << endl;

	/*
	 *	sizeof() checks how many bytes are in the datatype assigned
	 *	some datatypes can vary in their sizes, depending on which architecture on 
	 *	is working on. To check that one can use different assertions, more on that is 
	 *	explained further down.
	 * */

	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of long: " << sizeof(long) << endl;
	cout << "Size of long double: " << sizeof(long double) << endl;
	cout << "Size of long long: " << sizeof(long long) << endl;

	/*	static_assert is checking if wchar_t is indeed 4 bytes long, if not
	 *	the compiler stops the program and puts out the error "'Require 1 byte wchat_t'"
	 * */
	//static_assert(sizeof(wchar_t) == 4, "Require 1 byte wchar_t");

	return 0;
}
