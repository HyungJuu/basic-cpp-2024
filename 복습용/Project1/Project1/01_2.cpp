// 함수 오버로딩
// 함수명이 동일하지만, 매개변수의 선언이 달라야 한다. -> 자료형, 매개변수의 개수

#include <iostream>

int MyFunc(int num)
{
	num++;
	return num;
}

int MyFunc(int a, int b)
{
	return a + b;
}

int main()
{
	MyFunc(20);		// MyFunc(int num) 함수를 호출
	MyFunc(30, 40);	// MyFunc(int a, int b) 함수를 호출
	// 함수 호출 시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능하다.
	
	return 0;
}
