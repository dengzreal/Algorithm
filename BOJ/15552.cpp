#include <iostream>

using namespace std;

int main()
{
	int T = 0;
	int a, b;
	
	//int *sum[] = {};
	
		
	cin >> T;
	int *sum = new int[T];
	
	for(int i = 0; i < T; i++)
	{
		cin >> a >> b;
		sum[i] = a + b;
		
	}
	
	for(int i = 0; i < T; i++)
	{
		cout << sum[i] << '\n';
	}
	
}
