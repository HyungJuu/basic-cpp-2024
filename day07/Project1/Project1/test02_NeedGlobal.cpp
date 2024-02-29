#include <iostream>
using namespace std;

int simObjCnt = 0;		// 전역변수
int cmxObjCnt = 0;		// 전역변수

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;

		//cmxObjCnt++;	// 전역변수로 선언되어 있어서 SoSimple 클래스에서도 접근가능
		//cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

class SoComplex
{
public:
	SoComplex()
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

int main()
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex con2 = com1;
	SoComplex();	// 함수 호출 -> 클래스명과 동일한 생성자를 호출 -> 객체가 생성되는데 이름이 없음 -> 임시객체 생성
	return 0;
}