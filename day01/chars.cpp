#include <iostream>

using namespace std;

int main() {
	
	char ch1 = 'A';
	char ch2 = 'B'; // (65535)_10
	char ch3 = 67; // (15)_10
	char ch4 = 68; // (585)_10

	// u'' and U'' only available since C++11 (update the compiler)
	char16_t val16 = u'Ω';
 	char32_t val32 = U'Ω';
	
	cout << "Size of val16: " << sizeof(val16) << '\n' 
		<< "Size of val32: " << sizeof(val32) << endl;

	cout << bin << endl;

	return 0;
}
