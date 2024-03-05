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
		cout << "나의 이름은 " << getname() << " 이고, 나이는 " << getage() << " 살이며 전화번호는 " << pNumber << "입니다." << endl;
	}
};

int main()
{
	MyInfo m("김근아", 25, "010-6301-3072");
	m.printMyInfo();
	return 0;
}