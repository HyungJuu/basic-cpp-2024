#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple	// class => 사용자가 정의한 자료형
{
public:
	Simple()	// 생성자(클래스 이름과 같은 메서드)
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1 : ";
	Simple* sp1 = new Simple; // new 연산자로 힙영역에 Simple이라는 객체 생성
	// Aaa *ap = new Aaa;
	cout << "case2 : ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);
	// malloc으로 객체생성
	cout << endl << "end of main" << endl;
	delete sp1;		// 객체를 반환
	free(sp2);
	return 0;
}

// 클래스(사용자정의)는 기본자료형이 가지고 있는 모든 기능을 사용
// 클래스로 객체를 만든다.
// 클래스는 또하나의 type
