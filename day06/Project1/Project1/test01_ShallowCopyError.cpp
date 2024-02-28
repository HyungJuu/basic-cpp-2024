#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)	// 생성자
	{
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];	// 힙 영역에 문자열 배열을 생성
		strcpy(name, myname);	// 
		age = myage;
	}
	/* 얕은 복사
	Person(const Person& other)
	{
		this->name = other.name;
		this->age = other.age;
	}
	*/

	// 깊은 복사
	Person(const Person& other)		// 복사 생성자
	{
		cout << "깊은 복사생성자 호출" << endl;
		this->name = new char[strlen(other.name) + 1];		// 힙 영역에 메모리공간을 문자열
		strcpy(name, other.name);		// 새로운 공간에 같은 값의 문자열 복사
		this->age = other.age;

	}

	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Person()	// 소멸자 : ~생성자 형태
	{
		delete[]name;	// 힙 영역에 할당받은 name이라는 메모리 회수
		cout << "Called destructor!" << endl;
	}
};

int main()
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;		// -> 얕은 복사
	// 객체를 두개 생성했지만 소멸자가 한번만 호출됨
	// 소멸자 실행으로 name이 참조하는 문자열이 소멸됨
	// man1과 man2 객체가 같은 문자열을 참조하고 있기 때문에
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}


// call-by-valeue
int func(int a)		// a = 10; , num의 10을 복사해서 사용한다.
{
	a = 10 + a;
	return a;		// a를 리턴한다.
}

int num = 10;
int res = func(num);