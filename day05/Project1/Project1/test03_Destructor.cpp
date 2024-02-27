#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)		// 입력을 2개를 갖는 생성자
	{
		int len = strlen(myname) + 1;		//strlen() : 문자의 길이를 구하는 함수. 문자열의 길이를 구할때는 +1 (Null 문자를 하나 붙임)
		name = new char[len];
		cout << "char 크기 : " << sizeof(char) << endl;
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Person()	// 소멸자
	{
		delete[]name;
		cout << "Called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
