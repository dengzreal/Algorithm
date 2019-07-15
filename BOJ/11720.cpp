#include <iostream>

using namespace std;

int main()
{
	int times, temp;
	int sum = 0;
	char num;
	
	cin >> times;
	cin.get();
	
	for (int i = 0; i < times; i++)
	{
		cin.get(num);
		temp = num - '0';
		sum += temp;
	}
	cout << sum << endl;
}
