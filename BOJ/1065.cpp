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
		cnt = 99; // 100�̸��� �ڿ��� 1~99 
		for (int i=100; i<=N; i++)
		{
			a = i/100;			// 100�� �ڸ� 
			b = (i/10) % 10;	// 10�� �ڸ� 
			c = i%10;			// 1�� �ڸ� 
			
			// (100�ڸ� - 10�ڸ�) == (10�ڸ� - 1�ڸ�)
			// ���̰� ����? ���������̴�. 
			if ((a-b) == (b-c)) 
			{
				cnt++;
			}
		}
		cout << cnt;
	}
	return 0;
}
