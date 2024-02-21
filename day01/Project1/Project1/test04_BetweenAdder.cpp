#include <iostream>

/*int main() {
	
	int val1, val2;
	// int val1;
	// int val2;
	int result = 0; // 변수 선언과 동시에 값을 대입 : 변수 초기화
	std::cout << "두 개의 숫자입력 : ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합 : " << result << std::endl;
	return 0;
}

/*
제어문
	1. 선택제어문
		if문 / switch문
	2. 반복제어문
		for문, while문
	
	* for(초기식; 조건식; 증감식) {
		1. 초기식을 가지고 조건식을 따진다.
		2. 참이면 for문의 실행문을 실행하고
		3. 증감식을 실행한다.
		4. 조건식을 따지고
		2 -> 3 -> 4 -> 2
	* }
*/