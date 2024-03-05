#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point& operator++()				// 전위증가 -> 증가하고 던짐
	{								// a = ++i => i 값을 증가시키고 나서 a에 대입한다.
		xpos += 1;
		ypos += 1;
		return *this;
	}

	const Point operator++(int)		// 후위증가 -> 던져주고 증가 a = i++ : i값을 a에 대입하고 나서 증가한다..
	{	// 1. 현재의 객체를 복사하여 현재의 속성값을 유지시킨다.
		const Point retobj(xpos, ypos);		// const Point retobj(*this);

		// 2. 현재 객체의 속성값을 1씩 증가시킨다.
		xpos += 1;
		ypos += 1;

		// 3. 증가 이전에 복사한 객체를 전달한다.
		return retobj;
	}

	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
};

Point& operator--(Point& ref)		// 전위감소
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

const Point operator--(Point& ref, int)		// 후위감소
{
	const Point retobj(ref);		// const 객체라 한다.
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}

int main()
{
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();

	return 0;
}