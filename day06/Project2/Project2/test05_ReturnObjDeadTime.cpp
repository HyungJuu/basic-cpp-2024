#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
	
public:
	SoSimple(int n) : num(n)	// 입력값 7 전달
	{
		cout << "New Object : " << this << endl;		// this : 객체 자기자신
	}

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj : " << this << endl;
	}

	~SoSimple()
	{
		cout << "Destroy obj : " << this << endl;
	}

};

// 출력    함수이름		입력
SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR : " << &ob << endl;		// &ob : 객체 ob의 주소
	return ob;
}

int main()
{
	SoSimple obj(7);	// SoSimple 타입의 객체 obj 생성 -> 입력값 7 전달
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);		// 임시객체 주소 저장
	cout << "Return Obj " << &tempRef << endl;

	return 0;
}

/*
New Object : 000000CFE22FFA44			: 객체 obj 주소
New Copy obj : 000000CFE22FFB44			: 객체 ob 주소
Parm ADR : 000000CFE22FFB44				: 객체 ob 주소
New Copy obj : 000000CFE22FFB84			: 임시 객체 주소
Destroy obj : 000000CFE22FFB44			: 객체 ob 소멸
Destroy obj : 000000CFE22FFB84			: 임시 객체 소멸

New Copy obj : 000000CFE22FFBA4			: 객체 ob 주소			// main 함수에서 SoSimple 객체 obj가 생성될 때의 주소
Parm ADR : 000000CFE22FFBA4				: 객체 ob 주소			// SimpleFuncObj 함수 내에서 SoSimple 객체 ob가 생성될 때의 주소 (매개변수로 받은 객체의 주소)
New Copy obj : 000000CFE22FFA64			: 임시 객체 주소		// SimpleFuncObj 함수 내에서 SoSimple 객체 ob를 복사하여 새로운 객체가 생성될 때의 주소 (복사 생성자 호출)
Destroy obj : 000000CFE22FFBA4			: 객체 ob 소멸			// SimpleFuncObj 함수 내에서 생성된 SoSimple 객체 ob가 소멸될 때의 주소
Return Obj 000000CFE22FFA64				: 임시 객체 주소		// main 함수에서 생성된 SoSimple 객체 obj가 소멸될 때의 주소
Destroy obj : 000000CFE22FFA64			: 임시 객체 소멸		// SimpleFuncObj 함수 내에서 생성된 SoSimple 객체 ob가 소멸될 때의 주소
Destroy obj : 000000CFE22FFA44			: 객체 obj 소멸			// main 함수에서 생성된 SoSimple 객체 tempRef가 소멸될 때의 주소
*/