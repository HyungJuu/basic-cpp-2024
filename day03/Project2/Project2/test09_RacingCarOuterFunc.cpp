#include <iostream>
using namespace std;

namespace CAR_CONST		// 이름공간 CAR_CONST 생성
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

struct Car		// 구조체
{
	// =============멤버변수=================
	char gamerID[CAR_CONST::ID_LEN];	// [] : 배열(동일한 타입을 연속적으로 만든다.)  // char gamerID[20]; -> 배열 방의 갯수 20
	// :: = 범위연산자	// 이름공간 CAR_CONST 안의 객체 ID_LEN을 가져온다.
	int fuelGauge;
	int curSpeed;


	// =============멤버함수=================
	// 함수 선언
	void ShowCarState();		// 상태정보 출력
	void Accel();				// 엑셀, 속도증가
	void Break();				// 브레이크, 속도감소
};

void Car::ShowCarState() // Car:: => 어디 소속인지 표시
{
	cout << "소유자 ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel()
{
	if (fuelGauge <= 0)		// fuelGauge : 100 , curSpeed : 0
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;	// fuelGauge : 98

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
	Car run99 = { "run99", 100, 0 };	// 초기화(gamerID, fuelGauge, curSpeed)		// 스택에 생성됨
	run99.Accel();	// 98, 10	// run99 안의 Accel() 함수 호출
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}


// 멤버변수는 public() 함수를 붙이고 멤버함수는 private()함수를 붙인다.