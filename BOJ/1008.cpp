
#include <iostream>
// iostream�� ������ �� �� �ִ� ������ ������ ���� 
#include <iomanip>

using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	
	// setprecision: ������ + �Ҽ��� ���ļ� 9�ڸ�
	// fixed���Խ�ų��: �Ҽ��θ� 9�ڸ� 
	cout << fixed << setprecision(9);
	cout << a / b;

} 
