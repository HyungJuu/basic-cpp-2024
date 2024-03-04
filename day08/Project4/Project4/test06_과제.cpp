/*
RemoteControl 클래스, SamsungTv 클래스, LgTv 클래스를 설계하고,
remote->on() 호출하면 연결된 TV에 따라서
"삼성 TV on" 또는 "엘지 TV on"이 출력되도록 프로그램을 완성하시오.
*/

#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on() { }
};

class SamsungTv : public RemoteControl	// RemoteControl 클래스를 상속받는다.
{
public:
	virtual void on()
	{
		cout << "삼성 TV on" << endl;
	}
};

class LgTv : public RemoteControl		// RemoteControl 클래스를 상속받는다.
{
public:
	virtual void on()
	{
		cout << "엘지 TV on" << endl;
	}
};
int main()
{
	// 삼성TV
	RemoteControl* remote = new SamsungTv();	// SamsungTv 객체를 생성 -> 포인터변수 remote로 참조
	remote->on();								// 객체 포인터 타입(ReomteControl)을 기준으로 하기때문에 생성한 객체에 접근하려면 virtual(가상함수)로 선언한다.

	// 엘지TV
	RemoteControl* remote = new LgTv();
	remote->on();
	
	return 0;
}