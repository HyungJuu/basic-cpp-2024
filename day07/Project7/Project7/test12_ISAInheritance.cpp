#include <iostream>
#include <cstring>
using namespace std;

// Computer 클래스 선언
class Computer
{
private:
	char owner[50]; // char 타입의 onwer라는 이름의 배열

public:
	Computer(const char* name)
	{	
		//cout << "Computer 생성자" << endl;
		strcpy(owner, name);
	}

	void Calculate()
	{
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class NotebookComp : public Computer	// 클래스 NotebookComp는 Computer를 상속받고 있다.
{
private:
	int Battery;

public:
	NotebookComp(const char* name, int initChag) : Computer(name), Battery(initChag)
	{ 
		//cout << "NotebookComp 생성자" << endl;
	}

	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}

		cout << "이동하면서 ";
		Calculate();
		UseBattery();
	}

	int GetBatteryInfo() { return Battery; }
};
											// (Computer <- (NotebookComp <- TableNotebook))
class TableNotebook : public NotebookComp	// 클래스 TableNotebook은 NotebookComp를 상속받고 있다.
{											// 클래스 NotebookComp이 Computer를 상속받고 있으므로 TableNotebook 또한 Computer를 상속받는다.
private:										
	char regstPenModel[50];

public:
	TableNotebook(const char* name, int initChag,const char* pen) : NotebookComp(name, initChag)
	{
		//cout << "TableNotebook 생성자" << endl;
		strcpy(regstPenModel, pen);
	}

	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다.";
			return;
		}

		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}
};



int main(void)
{
	NotebookComp nc("이수종", 5);
	TableNotebook tn("정수영", 5, "ISE-241-242");
	//TableNotebook tn("홍길동", -1, "111-2222-333");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	//tn.Write("111-2222-333");

	return 0;
}