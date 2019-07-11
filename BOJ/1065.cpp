#include <iostream>

using namespace std;

int main()
{
	int N, cnt;
	int a, b, c;
	cin >> N;
	
	if (N<100)
	{
		cout << N;
	}
	else
	{
		cnt = 99; // 100미만의 자연수 1~99 
		for (int i=100; i<=N; i++)
		{
			a = i/100;			// 100의 자리 
			b = (i/10) % 10;	// 10의 자리 
			c = i%10;			// 1의 자리 
			
			// (100자리 - 10자리) == (10자리 - 1자리)
			// 차이가 같다? 등차수열이다. 
			if ((a-b) == (b-c)) 
			{
				cnt++;
			}
		}
		cout << cnt;
	}
	return 0;
}
