#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x, int y) : xpos(x), ypos(y)
	{ }

	void viewPoint() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend Point operator+(const Point& pos1, const Point& pos2);
	friend Point operator+(const Point& ref, int num);
	friend Point operator+(int num, const Point& ref);

};

Point operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}

Point operator+(const Point& ref, int num)
{
	Point pos1(ref.xpos + num, ref.ypos + num);
	return pos1;
}


Point operator+(int num, const Point& ref)
{
	return num+ref;
}
int main()
{
	Point a(10, 20);
	a.viewPoint();

	Point b(30, 40);
	b.viewPoint();

	Point c = a + b;
	c.viewPoint();

	Point d = a + 100;
	d.viewPoint();

	//Point e = 100 + a;
	//e.viewPoint();


	//d.viewPoint();
	//e.viewPoint();

	//cout << c << endl;
	//cout << d << endl;
	//cout << e << endl;

	return 0;
}