#include <iostream>
using namespace std;

class AAA 
{
private:
	int num;

private:	// 생성자를 private에 만들때 -> 객체가 하나만 필요할때 => 싱글톤패턴
	AAA(int n) : num(n) {}	// 생성자 : 이니셜라이저

public:
	AAA() : num(0) {}	

	~AAA() {};	// 소멸자 : 객체가 소멸시 반드시 호출되는 것. 오버로딩 불가
	AAA& CreateInitObj(int n) const		 // {} 안의 값은 변경 불가능
	{
		AAA* ptr = new AAA(n);		// 힙 영역에 객체 생성
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
};


int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;
	return 0;
}