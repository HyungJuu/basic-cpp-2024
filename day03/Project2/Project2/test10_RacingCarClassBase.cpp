#include <iostream>
#include <cstring>

using namespace std;

namespace CAR_CONST		// 이름공간 생성
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class Car	// 클래스
{
	// 멤버변수, 필드, 속성
private: // 클래스 안에서만 접근가능하도록 제한
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	// 멤버함수, 메서드, 기능
public: // 클래스 외부에서 접근가능
	void InitMembers(const char * ID, int fuel);		// 필드를 초기화시키는 기능 (멤버변수 2개 선언되어 있음)
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMembers(const char * ID, int fuel)		// 필드의 초기화를 담당하는 메서드
{
	strcpy(gamerID, ID);	// 전달된 ID의 문자열을 복사해서 gamerID에 저장
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "소유자 ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car run99;							// class car 타입의 객체 run99 생성
	run99.InitMembers("run99", 100);	// run99 객체의 InitMembers() 메서드 호출하여 필드를 초기화
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}

