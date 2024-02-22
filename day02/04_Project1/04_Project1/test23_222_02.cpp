#include <iostream>

using namespace std;

int global = 100;	// 전역변수 -> 프로그램 전체에서 사용가능
int global1 = 200;

int main()
{
	int val = 100;	// 지역변수 -> 선언된 범위 내에서만 사용가능
	global = 200; // 전역변수를 사용

	int global1 = 300;

	cout << "전역변수 global : " << global << endl;
	cout << "지역변수 : " << val << endl;
	cout << "전역변수 global1 : " << global1 << endl;	// 전역변수와 지역변수의 이름이 동일할 경우 -> 지역변수가 우선(전역변수는 가려진다.)

	return 0;
}

void func()
{
	int val = 0;
	global = 10;
	global1 = 10;
	//val = 10;  // func()함수 안에 val이라는 변수를 선언하지 않으면, val은 main() 함수의 지역변수라서 사용X
	val = 10;
}