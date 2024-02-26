#include <iostream>
#include "test17_Filedivi.h"
using namespace std;

Human::Human(const char* name, const char *birth, int age, const char* job)
{
	strcpy(Name, name);
	strcpy(Job, job);
	Age = age;
	strcpy(Birth, birth);
	//Birth = birth;
	
}

void Human::HumanInfo()
{
	//cout << "나는 " << age << "살인 " << job << ' ' << name << " 입니다." << endl;
	printf("나는 생일이 %d이고 %d살인 %s %s입니다.\n", Birth, Age, Job, Name);
}


int main()
{
	Human h("김근아", "001122", 25, "학생");	// 객체생성방법
	h.HumanInfo();	// 나는 25살인 학생 김근아입니다.

	return 0;
}