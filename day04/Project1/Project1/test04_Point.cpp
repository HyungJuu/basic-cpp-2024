#include <iostream>
#include "test03_Point.h"
using namespace std;

/* 이전 코드
 
bool Point::InitMembers(int xpos, int ypos) // 메서드(함수) 정의
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
} 
*/


Point::Point(const int& xpos, const int& ypos)	// 생성자 추가
{
	x = xpos;
	y = ypos;
}


int Point::GetX() const		// const가 앞에 붙으면( const int Point::GetX() ) 출력을 상수화시킨다는 것
{							// 함수의 const화는 뒤에 붙인다.
	return x;
}

int Point::GetY() const
{
	return y;
}

bool Point::SetX(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	y = ypos;
	return true;
}