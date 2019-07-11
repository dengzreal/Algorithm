#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int c0, c1, c2;
	int result;
	
	cin >> a >> b;
	
	result = a * b;
	
	c0 = a * (b % 10);
	c1 = a * ((b / 10) % 10);
	c2 = a * (((b / 10) / 10) % 10);
	
	cout << c0 << endl 
	<< c1 << endl 
	<< c2 << endl
	<< result;
	
	return 0;
}
