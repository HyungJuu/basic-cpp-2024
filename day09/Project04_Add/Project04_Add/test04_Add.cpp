/*
	객체를 더하는 add 멤버함수
*/

#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	Point(int ax = 0, int ay = 0) : x(ax), y(ay)
	{
		cout << "Operator" << endl;
	}
	Point operator+(const Point& other)	// operator+ 말고 add라는 멤버함수로 작성해도 상관은 없음
	{
		return Point(x + other.x, y + other.y);
	}

	void ShowPoint()
	{
		cout << '[' << x << ", " << y << ']' << endl;
	}
};

int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);

	pos3.ShowPoint();

	return 0;
}