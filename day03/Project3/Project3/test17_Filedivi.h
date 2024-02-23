#pragma once
using namespace std;

class Human
{
private:
	char name[20];
	int age;
	char job[20];

public:
	Human(const char aname, int aage, char ajob);
	void HumanInfo();
};