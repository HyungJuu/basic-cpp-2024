﻿#include <iostream>
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
	char gamerID[CAR_CONST::ID_LEN];	// [] : 배열(동일한 타입을 연속적으로 만든다.)  // char gamerID[5]; -> 배열 방의 갯수 5
	// :: = 범위연산자	// 이름공간 CAR_CONST 안의 객체 ID_LEN을 가져온다.
	int fuelGauge;
	int curSpeed;

	void ShowCarState()
	{
		cout << "소유자 ID : " << gamerID << endl;
		cout << "연료량 : " << fuelGauge << "%" << endl;
		cout << "현재속도 : " << curSpeed << "km/s" << endl;
	}
	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= CAR_CONST::FUEL_STEP;		// 100 - 2 = 98

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)		// 0 + 10 >= 200
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}

	void Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main(void)
{
	Car run99 = { "run99", 100, 0 };	// 초기화(gamerID, fuelGauge, curSpeed)
	run99.Accel();		// run99 안의 Accel() 함수 호출
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}
