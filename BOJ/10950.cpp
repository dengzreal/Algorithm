#include <iostream>

using namespace std;

int main()
{
	int a, b, count;
	
	cin >> count;
	
	for(int i=0; i<count; i++)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}
	
	return 0;
}
