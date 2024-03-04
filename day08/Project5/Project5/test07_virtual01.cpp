#include <iostream>
using namespace std;

class Base
{
public:
	Base() {};
	~Base() {};

	virtual void func1() { cout << "Base::func1()" << endl; }
	virtual void func2() { cout << "Base::func2()" << endl; }
	void func3() { cout << "Base::func3()" << endl; }
};

class Derived : public Base
{
public:
	void func1() { cout << "Derived::func1()" << endl; }	// 재정의
	void func3() { cout << "Derived::func3()" << endl; }	// 재정의
	void func4() { cout << "Derived::func4()" << endl; }

	Derived() = default;
};

int main()
{
	Base b;		// Base 타입의 객체변수
	Derived d;
	Base* pb = new Derived();	// Base 타입의 객체 포인터

	pb->func1();
	pb->func2();
	pb->func3();	// func3() 에는 virtual이 붙지 않았기 때문에 객체포인터를 따라간다.

	cout << endl;
	Derived* pd = &d;
	pd->func1();
	pd->func2();
	pd->func3();
	pd->func4();


	delete pb;
	return 0;
}