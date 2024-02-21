#include <iostream>

int global = 100; // 전역변수. 프로그램 어디에서든 사용가능

void func() {
	int a;
	a = 100; // 지역변수. func() 함수 안에서만 사용가능
	global = 200;
}

int main() {

	int a;
	int val; // (지역변수) 메모리공간(RAM)에 int크기로 저장공간을 할당받고 val이름으로 사용한다.
	std::cout << "숫자입력 : ";
	std::cin >> val; // 입력을 받아서 >> 오른쪽 변수에 저장

	std::cout << "입력된 숫자는 " << val <<"입니다." << std::endl;
	a = 10;
	val = 100;
	global = 300;
	return 0;
}

/*
* 지역변수 = 로컬변수 : 선언된 범위안에서만 사용이 가능(static 영역에 저장)
*/