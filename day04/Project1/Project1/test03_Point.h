﻿//#pragma once	// Visual Studio에서만 지원
#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int x;
	int y;

public:
	Point(const int& xpos, const int& ypos);	// 생성자 추가
	//bool InitMembers(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif