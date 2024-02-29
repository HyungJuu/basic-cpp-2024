/*
* 객체를 복사
*/

#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage) : age(myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
	}

	Person(const Person& copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
		//this->age = copy.age;
	}


	void personInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Person()
	{
		delete[]name;
	}
};

int main()
{
	Person p("김근아", 25);
	p.personInfo();

	Person copyp(p);
	copyp.personInfo();

	return 0;
}