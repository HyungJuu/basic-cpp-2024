#include <iostream>
using namespace std;

class Number
{
private:
	int num;

public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n = 0)" << endl;
	}

	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main()
{
	/*
	int a = 10;
	int b = a;
	double d = 3.14;
	a = d;		// a의 타입은 int, d의 타입은 double -> 원칙적 불가능
	d = a;

	*/

	Number num;
	num = 30;
	num.ShowNumber();
	return 0;
}