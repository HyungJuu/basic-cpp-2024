/*
	복사 생성자 : 객체를 복사할 때 호출되는 생성자
				-> 따라서 복사할 객체를 입력으로 가져야 하는데 이때 원본 객체의 참조(&)를 입력으로 받아야 한다.
*/

#include <iostream>
using namespace std;

class A
{

public:
	A()
	{
		cout << "디폴트 생성자 호출" << endl;
	}

	A(int n)
	{
		cout << "A(int n) 생성자 호출" << endl;
	}

	A(const A& r)	// 복사 생성자
	{
		cout << "A(const A& r) 생성자 호출" << endl;
	}
};

void func(int a)		// 복사된 10
{
	a++;	//  복사된 값이므로 main함수의 n값이 증가하지 않음.
}

int main()
{	
	int n = 10;
	A obj1;			// 디폴트 생성자로 객체(obj1) 생성
	A obj2(10);		// 입력 하나를 가지는 생성자 호출
	A obj3(obj2);	// 복사 생성자 호출

	func(n);	// func()에 n = 10을 복사해서 전달

	return 0;
}