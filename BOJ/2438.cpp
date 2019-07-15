#include <iostream>

using namespace std;

int main()
{
	int times;
	
	cin >> times;
	
	for (int i = 1; i <= times; i++ )
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
