#include <iostream>

int main()
{
	// const 선언에 의해서 만들어진 변수 = 상수화된 변수
	const int num = 10;		// 상수를 선언할 때는 바로 초기화를 해야만 한다.
	int& ref = num;			// 상수화된 변수 num에 대한 참조자(&) 선언은 =>  const int& ref = num;

	return 0;
}

/*
	int a = 10;
	int b = 20;
	int res = a + b;

	cpu가 사용하는 메모리 레지스터에 a, b 임시 저장 -> 명령어 실행(a+b) -> 레지스터에 다시 저장 -> res에 저장
	다른명령어가 실행되면 앞의 임시저장된 메모리는 사라진다.
*/