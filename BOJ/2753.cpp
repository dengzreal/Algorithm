#include <iostream>

using namespace std;

int main(void) {
	int num1 = 0;
	cin >> num1;
	bool result = false;
	if (num1 % 4 == 0) {
		result = true;
		if (num1 % 100 == 0) {
			result = false;
		}
		if (num1 % 400 == 0) {
			result = true;
		}
	}
	else {
		result = false;
	}

	cout << (result == true) ? 1 : 0;
	return 0;
}
