#include <iostream>
#include "test17_과제.h"
using namespace std;

Human::Human(const char* name, const char *birth, int age, const char* job)	//: Birth(birth) -> 멤버 이니셜라이저
{
	strcpy(Name, name);
	strcpy(Job, job);
	Age = age;
	strcpy(Birth, birth);		// 숫자를 쓸때 00부터 쓰지않기때문에 001122 -> 594로 출력되므로 문자열로 취급해서 작성
	//Birth = birth;
	
}

void Human::HumanInfo()
{
	printf("나는 생년월일이 %s이고 %d살인 %s %s입니다.\n", Birth, Age, Job, Name);
}


int main()
{
	Human h("김근아", "001122", 25, "학생");	// 객체생성방법
	h.HumanInfo();	// 나는 25살인 학생 김근아입니다. + 생년월일까지

	return 0;
}