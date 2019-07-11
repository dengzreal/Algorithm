#include <iostream>

#include <string>

using namespace std;



int main() {

	int a, b, c;

	int min;

	

	cin >> a >> b >> c;



	if ((a >= b&&b >= c) || (a <= b&&b <= c))

		min = b;

	else if ((b <= a&&a <= c) || (b >= a&&a >= c))

		min = a;

	else min = c;



	cout << min;

}
