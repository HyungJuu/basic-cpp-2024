#include <iostream>
using namespace std;

class Person
{
private:
	char name[50];
	int age;

public:
	Person(const char* myname, int myage)
	{
		cout << "부모생성자 실행" << endl;
		age = myage;
		strcpy(name, myname);
	}
	
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person	// : public 상속할 부모클래스명 
{
private:
	string major;		// 문자열

public:
	UnivStudent(const char* myname, int myage, string mymajor) : Person(myname, myage)	// 부모생성자 : Person(myname, myage)
	{
		cout << "자식생성자 실행" << endl;
		this->major = mymajor;
		//strcpy(major, mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main()
{
	//UnivStudent ustd1("Lee", 22, "Computer eng.");
	//ustd1.WhoAreYou();

	//UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	//ustd2.WhoAreYou();
	
	UnivStudent s("홍길동", 50, "백수");
	s.WhoAreYou();


	return 0;
}