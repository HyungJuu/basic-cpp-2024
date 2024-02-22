/*
	date: 20240222
	desc : 매개변수 디폴트값/ test14 다시 작성
*/

#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 2);	// 함수선언(함수정의의 머리만) -> 디폴트값 위치

int main() // 메인함수가 코드의 윗쪽에 작성하는것이 좋다.
{
	cout << Adder() << endl;			// 함수호출 : Adder()
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;
	return 0;
}

int Adder(int num1, int num2)			// 함수정의(사용자함수)
{
	return num1 + num2;
}

// 클래스 안에 들어가는 함수를 메서드라고 부른다.★★★★★