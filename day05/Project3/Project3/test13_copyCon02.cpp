#include <iostream>
using namespace std;

class AA
{
private:
	int a;
	int b;

public:
	AA(int a, int b)		// 생성자
	{
		this->a = a;
		this->b = b;
	}

	void AAInfo()
	{
		cout << a << " " << b << endl;
	}
};

int main()
{
	AA obj1(10, 20);	// 입력값 두개를 받는 생성자를 호출
	obj1.AAInfo();
	
	AA obj2(obj1);		// 복사생성자를 만들지 않았지만 호출됨 -> 컴파일러가 자동으로 삽입 (디폴트 복사생성자)
	obj2.AAInfo();

	return 0;
}