#pragma once
using namespace std;
/*
	test17_Filedivi.h 헤더파일 : 선언
*/

class Human
{
private:
	char Name[20];
	int Age;
	char Job[20];
	char Birth[20];

public:
	Human(const char* name, const char *birth, int age, const char* job);
	void HumanInfo();
};