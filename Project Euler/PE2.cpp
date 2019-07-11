#include <iostream>

using namespace std;

int fibo(int i);

int main()
{
	int sum = 0;
	int num = 0;
	int i = 2;
	
	while(1)
	{
		num = fibo(i);
		
		if (num > 4000000)
			break;
		
		sum += num;
		
		i += 3;
	}
	cout << sum;
}

int fibo(int i)
{
	int num = i + 1;
	
	if (num <= 1) return num;
	
	else return fibo(num - 2) + fibo(num - 3);
}
