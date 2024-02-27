/*
	객체배열
*/

#define _CRT_SECURE_NO_WARININGS
#include <iostream>
using namespace std;

class Human
{
private:
	char Name[30];
	int Age;

public:
	Human(const char* name, int age)
	{
		cout << "생성자 호출" << endl;
		strcpy(Name, name);
		Age = age;
	}

	void HumanInfo()
	{
		cout << "이름 : " << Name << " / ";
		cout << "나이 : " << Age << endl;
	}

	~Human()
	{	
		cout << "소멸자 호출" << endl;
	}
};

int main()
{
	Human h[3] = { Human("홍길동", 50), Human("김철수", 40), Human("김영희", 30) };		// 객체배열
	
	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 50);	// 객체 포인터(주소)로 멤버 접근
	Human h2("라마바", 30);					// 객체로 멤버 접근
	h1->HumanInfo();		// 포인터 변수에는 객체의 원본이 아니라 주소값을 저장 -> 즉 간접적으로 접근( -> )
	h2.HumanInfo();			// 

	delete h1;
	
	return 0;
}