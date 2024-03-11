#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n1, n2;
	char cal;
	cout << "정수 2개를 입력하세요 >> ";
	cin >> n1 >> n2;

	cout << "계산하고자 하는 연산자를 입력하세요 >> ";
	cin >> cal;

	if (cal == '+')
		cout << n1 << '+' << n2 << '=' << n1 + n2 << endl;

	else if (cal == '-')
		cout << n1 << '-' << n2 << '=' << n1 - n2 << endl;

	else if (cal == '*')
		cout << n1 << '*' << n2 << '=' << n1 * n2 << endl;
	
	else if (cal == '/')

	try		// 예외처리
	{
		if (!n2) throw n2;	// n2가 0이 아니면(true)이면 n2값으로 그대로 계산
		cout << n1 << '/' << n2 << '=' << n1 / n2 << endl;
	}
	catch (int exception)
	{
		cout << "0 으로 나눌수 없습니다." << endl;
	} 

	return 0;
}