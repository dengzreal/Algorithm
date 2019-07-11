#include <iostream>
#include <cstdio>

using namespace std;

	int N;
	int Min = 1000000;
	int Max = -1000000;
	
	void Input()
	{
		cin >> N;
	}
	
	void Solution()
	{
		int tmp;
		for (int i = 0; i < N; i++ )
		{
			cin >> tmp;
			Min = (tmp < Min) ? tmp : Min;
			Max = (tmp > Max) ? tmp : Max;
		}
	}
	
	void Output()
	{
		cout << Min << " " << Max << endl;
	}
	
	int main()
	{
		Input();
		Solution();
		Output();
		
		return 0;
	}
	
