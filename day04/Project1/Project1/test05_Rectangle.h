//#pragma once
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "test03_Point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};

#endif
