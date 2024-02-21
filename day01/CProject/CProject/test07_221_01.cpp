/*
	선택제어문 : if 문
*/

#include <iostream>

using namespace std; // std 네임스페이스의 모든 것을 사용하겠다.

int main() {

	int inKey;
	cout << "숫자 하나를 입력하세요 > ";
	cin >> inKey;

	// if문을 사용할때 괄호()를 꼭 써야한다.
	if (inKey == 5) { // if(조건식) { ..... 실행문 }
		cout << "빙고!" << endl;
	}
	if (inKey > 5) {
		cout << "숫자가 큽니다." << endl;
	}
	if (inKey < 5) {
		cout << "숫자가 작습니다." << endl;
	}

	return 0;
}
