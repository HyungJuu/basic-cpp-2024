#include <iostream>

using namespace std;

int sum(int n1, int n2) {
	return n1 + n2;
}

int sub(int n1, int n2) {
	return n1 - n2;
}

int multi(int n1, int n2) {
	return n1 * n2;
}

int dev(int n1, int n2) {
	return n1 / n2;
}

int main()
{
	int val1, val2, res = 0;
	char calc;

	cout << "두 정수를 입력하세요 > ";
	cin >> val1 >> val2;
	cout << "연산자를 입력하세요 > ";
	cin >> calc;

	if (calc == '+') {
		//int res;
		res = sum(val1, val2);
		cout << "덧셈결과 > " << res << endl;
	}

	else if (calc == '-') {
		//int res;
		res = sub(val1, val2);
		cout << "뺄셈 결과 > " << res << endl;
	}

	else if (calc == '*') {
		res = multi(val1, val2);
		cout << "곱셈 결과 > " << res << endl;
	}

	else if (calc == '/') {
		res = dev(val1, val2);
		cout << "나눗셈 결과(몫) > " << res << endl;
	}

	else cout << "잘못된 연산자입니다." << endl;
	
	return 0;
}