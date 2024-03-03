#include <iostream>

using namespace std;

int main()
{
	const int num = 10;		// num 변수를 상수화 시킨다.
	//num = 100;			// num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int *pnum1;			// 포인터변수 선언(변수앞에 *) : 포인터(주소)변수 pnum1 선언	[선언 안의 * : 아무 의미없는 기호표시]
	pnum1 = &num1;		// 변수 num1의 주소값을 포인터변수 pnum1에 저장한다.		[& : 주소연산자]

	cout << "num에 저장된 값 :" << num << endl;
	cout << "num1에 저장된 값 : " << num1 << endl;
	cout << "num1의 주소값 : " << & num1 << endl;
	cout << "pnum1에 저장된 값 : " << pnum1 << endl;
	cout << "pnum1에 저장된 놈의 데이터 : " << *pnum1 << endl;		// num1의 값과 같다.
																	// [코드 안의 * : 가리키는 놈(num1)의 데이터]

	return 0;
}