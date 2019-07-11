#include <iostream>

using namespace std;

int main(void)
{
	int tscore;
	cin >> tscore;

	if (tscore >= 90)
		cout << "A";

	else if (tscore >= 80)
		cout << "B";

	else if (tscore >= 70)
		cout << "C";

	else if (tscore >= 60)
		cout << "D";

	else
		cout << "F";

}
