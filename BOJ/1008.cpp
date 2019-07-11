
#include <iostream>
// iostream에 영향을 줄 수 있는 조작자 설정이 포함 
#include <iomanip>

using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	
	// setprecision: 정수부 + 소수부 합쳐서 9자리
	// fixed포함시킬시: 소수부만 9자리 
	cout << fixed << setprecision(9);
	cout << a / b;

} 
