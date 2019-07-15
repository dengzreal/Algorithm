#include <iostream>

using namespace std;

int main()
{

	int N,X;
	int j=0;
	
	cin >> N >> X;

	int arr0[10001] = { 0 };
	int arr1[10001] = { 0 };

	for (int i = 0; i < N; i++)
	{
		cin >> arr0[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (arr0[i] < X)
		{
			
			arr1[i] = arr0[i];
				j++;
		}
	}

	for (int i = 0; i < j; i++)
	{
		cout << arr1[i] << " ";
	}


}
