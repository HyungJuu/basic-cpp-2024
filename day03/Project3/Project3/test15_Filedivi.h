﻿#pragma once // #ifndef  ... #endif 작업을 하지않아도 된다.
using namespace std;
/*
	test15_Filedivi.h 헤더파일 : 선언
*/

class AClass
{
private:
	int num;

public:		// 접근제어 지시자
	AClass(int anum);
	void AInfo();
};