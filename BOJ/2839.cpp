#include <iostream>
#define oh 5
#define sam 3

using namespace std;

int solution(int &n)
{
	if(n<sam) return -1;
	int ohmok = n/oh;
	
	while(ohmok>=0)
	{
		int tmp = n-(oh*ohmok);
		if(tmp % sam ==0)
		{
			return ohmok + (tmp/sam);
		}
		ohmok--;
	}
	return -1;
}

int main()
{
	int n;
	int result;
	cin >> n;
	
	result = solution(n);
	
	cout << result;
	return 0;
}
