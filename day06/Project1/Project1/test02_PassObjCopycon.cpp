#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)	// 생성자
	{ }

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	void ShowData()		// 클래스 SoSimple 소속 -> 멤버함수 -> 객체 생성 후 사용 가능
	{
		cout << "num : " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)		// 전역함수 -> 바로 접근가능
{
	ob.ShowData();
}

int main()
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수호출 후" << endl;
	return 0;
}