#include <iostream>
#include "test17_Filedivi.h"
using namespace std;

Human::Human(char aname, int aage, char ajob)
{
	//strcpy(name, aname);

	name = aname;
	age = aage;
	job = ajob;
}

void Human::HumanInfo()
{
	cout << "나는 " << age << "살인 " << job << ' ' << name << " 입니다." << endl;
	//printf("나는 %d 살인 %s %s 입니다.\n", age, job, name);
}


int main()
{
	Human h("김근아", 25, "백수");	// 객체생성방법
	h.HumanInfo();	// 나는 25살인 백수 김근아입니다.

	return 0;
}