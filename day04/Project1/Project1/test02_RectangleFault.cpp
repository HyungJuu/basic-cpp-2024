#include <iostream>
using namespace std;

class Point		// 클래스 = 타입
{
public:	// 멤버변수 x, y
	int x;
	int y;
};

class Rectangle
{
public:	// 멤버변수 upLeft, lowRight
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo();	// 메서드 선언
};

void Rectangle::ShowRecInfo()	// 메서드 정의
{
	cout << "좌 상단 : " << '[' << upLeft.x << ", ";
	cout << upLeft.y << ']' << endl;
	cout << "우 하단 : " << '[' << lowRight.x << ", ";
	cout << lowRight.y << ']' << endl << endl;
}

int main(void)
{
	Point pos1 = { -2, 4 };		// int num = 10;
	Point pos2 = { 5, 9 };

	Rectangle rec = { pos2,pos1 };
	rec.ShowRecInfo();
	return 0;
}