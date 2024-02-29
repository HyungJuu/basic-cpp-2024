#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;	// static 멤버변수(클래스변수) 선언 -> SoSimple 클래스 내에서 공유된다.

public:
	SoSimple()	// 생성자
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};
int SoSimple::simObjCnt = 0;	// static 멤버변수(클래스 변수) 초기화. 클래스 외부에서 초기화한다.
								// 클래스명::클래스변수 = 초기화;

class SoComplex
{
private:
	static int cmxObjCnt;	// 클래스변수 선언 -> SoComplex 클래스 내에서 공유된다.

public:
	SoComplex()	// 생성자
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;	// 클래스변수 초기화

int main()
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex con2 = com1;
	SoComplex();	// 함수 호출 -> 클래스명과 동일한 생성자를 호출 -> 객체가 생성되는데 이름이 없음 -> 임시객체 생성
	return 0;
}