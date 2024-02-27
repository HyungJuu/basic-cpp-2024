#include <iostream>
using namespace std;

class TwoNumber
{
private:
	int num1;	// 멤버변수
	int num2;

public:
	TwoNumber(int num1, int num2) // 생성자
	{
		this->num1 = num1;		// 매개변수(num1)가 멤버변수(this->num1)에 저장된다.
		this->num2 = num2;
	}
	/*
	TwoNumber(int num1, int num2) : num1(num1), num2(num2)
	{
		// empty
	}
	*/

	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main()
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}