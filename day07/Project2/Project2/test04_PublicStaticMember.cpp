#include <iostream>
using namespace std;

class SoSimple
{
public:		// public : 접근 제한
	static int simObjCnt;		// static (클래스)멤버변수 선언
public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;		// static 멤버변수의 초기화

int main()
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;	// 클래스 이름으로 statcic 멤버에 접근이 가능하다.
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
	return 0;
}