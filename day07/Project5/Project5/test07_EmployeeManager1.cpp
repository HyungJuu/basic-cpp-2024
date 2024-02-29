#include <iostream>
#include <cstring>
using namespace std;


// PermanentWorker 클래스 정의
class PermanentWorker
{
private:
	char name[100];
	int salary;

public:
	PermanentWorker(const char* name, int money) : salary(money)
	{
		strcpy(this->name, name);
	}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		cout << "name : " << name << endl;
		cout << "salary : " << GetPay() << endl << endl;
	}
};

// EmployeeHandler 클래스 정의
class EmployeeHandler
{
private:
	PermanentWorker* empList[50];		// 객체포인터 배열 -> 객체 : PermanentWorker, empList라는 이름의 배열
	int empNum;

public:
	EmployeeHandler() : empNum(0) { }

	void AddEmployee(PermanentWorker* emp)	// 정규직(PermanentWorker) 객체의 포인터를 받아 -> empList 배열에 집어넣는다.(주소)
	{
		empList[empNum++] = emp;	// 후위 대입연산자 : 값은 넣은 후 증가  0, 1, 2 ...
	}

	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();	// empList 배열의 요소값(객체주소)을 통해서 멤버함수(ShowSalaryInfo())에 접근한다.
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();	// empList 배열의 요소값(객체주소)을 통해서 멤버함수(GetPay())에 접근한다.
		cout << "salary sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main()
{
	// 직원 관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 직원 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));		// new -> 힙 영역에 객체를 생성한다.
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}