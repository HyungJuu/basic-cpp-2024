#include <iostream>
using namespace std;

int Adder(int num1 = 1, int num2 = 2);	// 함수선언(함수정의의 머리만) -> 디폴트값 위치
// 매개변수가 주어지지 않으면 디폴트값인 num1 = 1, num2 = 2가 설정된다.

int main() // 메인함수가 코드의 윗쪽에 작성하는것이 좋다.
{
	cout << Adder() << endl;			// 함수호출 : Adder()
	// 매개변수 없이 함수를 호출하면 디폴트 값을 사용한다. => 1 + 2 = 3 출력

	cout << Adder(5) << endl;
	// 첫번째 매개변수 = 5, 나머지는 디폴트값을 사용한다. => 5 + 2 = 7 출력
	
	cout << Adder(3, 5) << endl;
	// 첫번째 매개변수 = 3, 두번째 매개변수 = 5 를 사용한다. => 3 + 5 = 8 출력

	return 0;
}

int Adder(int num1, int num2)			// 함수정의(사용자함수)
{
	return num1 + num2;
}

// 클래스 안에 들어가는 함수를 메서드라고 부른다.★★★★★