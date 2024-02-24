#pragma once
using namespace std;
/*
	test17_Filedivi.h 헤더파일 : 선언
*/

class Human
{
private:
	char name[20];
	int age;
	char job[20];

public:
	Human(const char* aname, int aage, const char* ajob);
	void HumanInfo();
};