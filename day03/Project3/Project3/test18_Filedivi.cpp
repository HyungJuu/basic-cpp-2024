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
	cout << "���� " << age << "���� " << job << ' ' << name << " �Դϴ�." << endl;
	//printf("���� %d ���� %s %s �Դϴ�.\n", age, job, name);
}


int main()
{
	Human h("��پ�", 25, "���");	// ��ü�������
	h.HumanInfo();	// ���� 25���� ��� ��پ��Դϴ�.

	return 0;
}