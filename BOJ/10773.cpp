#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
int N, temp;
int sum = 0;

int main()
{
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp == 0)
		{
			sum -= s.top();
			s.pop();
		}
		else
		{
			s.push(temp);
			sum += s.top();
		}
	  }  
	  cout << sum << endl;
	  
	  return 0;
}
