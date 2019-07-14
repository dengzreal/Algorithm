#include <iostream>

using namespace std;

int main()
{
	int times;
	int a, b;
	
	cin >> times;
	
	for (int i = 0; i < times; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " 
	<< a + b << endl;
	}
	
	return 0;
}


