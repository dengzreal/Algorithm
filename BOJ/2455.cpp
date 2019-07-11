#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int sum;
	int tmp = 0;
	
	cin >> a >> b;
	sum = b;
	
	for(int i=0; i<=3; i++)
	{
		cin >> a >> b;
		sum = sum - a + b;
		
		if(tmp<sum)
			tmp = sum;
	}
	
	cout << tmp;
}
