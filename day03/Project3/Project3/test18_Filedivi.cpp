#include <iostream>
#include "test17_Filedivi.h"
using namespace std;

Human::Human(const char* aname, int aage, const char* ajob)
{
	strcpy(name, aname);
	strcpy(job, ajob);
	age = aage;

	//name = aname;
	//job = ajob;
}

void Human::HumanInfo()
{
	//cout << "나는 " << age << "살인 " << job << ' ' << name << " 입니다." << endl;
	printf("나는 %d살인 %s %s입니다.\n", age, job, name);
}


int main()
{
	Human h("김근아", 25, "백수");	// 객체생성방법
	h.HumanInfo();	// 나는 25살인 백수 김근아입니다.

	return 0;
}