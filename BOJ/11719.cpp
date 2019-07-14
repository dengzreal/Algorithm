#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;

	for(int i = 0; i < 100; i++)
	{
		getline(cin, input);  // 앤터가 나오기 전 까지 한 줄 입력 
		cout << input  << endl;  
	}

	return 0;
}