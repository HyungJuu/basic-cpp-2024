#include <iostream>
using namespace std;

class AAA
{
private:
	int num;

public:
	AAA(int n = 0) :num(n)				// 정수 하나를 입력으로 갖는 생성자
	{
		cout << "AAA(int n = 0)" << endl;
	}

	AAA(const AAA& ref) :num(ref.num)		// 객체 하나를 입력으로 갖는 생성자
	{
		cout << "AAA(const AAA& ref)" << endl;
	}

	AAA operator=(const AAA& ref)			// 대입연산자 오버로딩
	{
		num = ref.num;
		cout << "operator=(const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
private:
	AAA mem;					// AAA타입의 객체

public:
	BBB(const AAA& ref) :mem(ref) { }		// 멤버 이니셜라이저(콜론 초기화)를 통해서 초기화
};

class CCC
{
private:
	AAA mem;

public:
	CCC(const AAA& ref) { mem = ref; }		// 대입연산을 통해서 초기화
};

int main()
{
	AAA obj1(12);
	cout << "************************" << endl;
	BBB obj2(obj1);
	cout << "************************" << endl;
	CCC obj3(obj1);
	return 0;
}

/*
	배열이름은 배열의 시작주소이다.
	int ary[3];		// 배열 선언부에서 배열 인덱스에 있는 숫자는 방의 크기. ary[0], ary[1], ary[2]
	ary[2];			// 코드실행에서 배열 인덱스에 있는 숫자는 방 번호를 나타냄

	ary[0] = 10;			// 0번방, 첫번째 방의 데이터
	*(ary + 0) = 10;		// *(배열의 시작주소 + 0) = 10 / ary[0] = 10; 과같다

	*(ary + 1) = 20; // == ary[1] = 20;  1번방에 20을 집어넣어라.

	ary의 주소가 0x0011 이라면 다음방, 1번방(두번째 방) 주소는 0x0015이다.

	int* p;		// 선언부에서는 포인터변수임을 나타냄
	*p;
*/