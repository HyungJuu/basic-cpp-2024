#include <iostream>
using namespace std;

class AA
{
private:
	int a;
	int b;		
public:
	AA(int a, int b)	// 생성자(초기화)
	{
		this->a = a;
		this->b = b;
	}

	AA(const AA& r)		// 복사생성자
	{
		this->a = r.a;
		this->b = r.b;
	}

	void AAInfo()
	{
		cout << a << " " << b << endl;
	}
};

int main()
{
	AA obj1(10, 20);	// 객체 obj1 생성 및 초기화
	obj1.AAInfo();

	AA obj2(obj1);		// 
	obj2.AAInfo();

	return 0;
}