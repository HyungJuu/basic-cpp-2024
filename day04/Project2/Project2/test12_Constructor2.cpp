#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();			// 함수선언 sc1() -> 입력 X 출력 O
	SimpleClass mysc = sc1();	//대입연산자(=) 오른쪽 : sc1() 함수 호출
	mysc.ShowData();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);		// sc라는 객체를 생성(입력 2개), type => SimpleClass
	return sc;					// 객체를 리턴
}