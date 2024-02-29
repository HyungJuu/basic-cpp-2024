#include <iostream>
using namespace std;


class Myclass
{
private:
	char name[30];
	int age;

public:
	Myclass(const char* myname, int myage) : age(myage)
	{
		strcpy(name, myname);
	}
	
	const char* getname() const
	{
		return name;
	}

	int getage()
	{
		return age;
	}
	
};

class MyInfo : public Myclass
{
private:
	char pNumber[20];

public:
	MyInfo(const char* myname,int myage, const char* mynum) : Myclass(myname, myage)
	{
		
		strcpy(pNumber, mynum);
	}


	void printMyInfo()
	{
		cout << "���� �̸��� " << getname() << " �̰�, ���̴� " << getage() << " ���̸� ��ȭ��ȣ�� " << pNumber << "�Դϴ�." << endl;
	}
};

int main()
{
	MyInfo m("��پ�", 25, "010-6301-3072");
	m.printMyInfo();
	return 0;
}