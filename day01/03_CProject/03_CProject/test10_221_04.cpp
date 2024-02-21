/*
	반복제어문 : for문
*/
#include <iostream>

using namespace std;

int main()
{
	int sum = 0; // 누적된 기능을 하는 변수는 변수초기화를 해줘야만 한다.
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	cout << sum << endl;
	return 0;
}