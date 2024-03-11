#include <iostream>
using namespace std;

void Calculator(int _n1, int _n2)
{
	cout << "+ : " << _n1 + _n2 << endl;
	cout << "- : " << _n1 - _n2 << endl;
	cout << "* : " << _n1 * _n2 << endl;

	if (!_n2) throw _n2;
	cout << "/ : " << _n1 / _n2 << endl;
}

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "정수 2개를 입력하세요 >> ";
	cin >> n1 >> n2;
	try
	{
		Calculator(n1, n2);
	}
	catch (int exception)
	{
		cout << "0으로 나눌 수 없습니다." << endl;
	}

	return 0;
}