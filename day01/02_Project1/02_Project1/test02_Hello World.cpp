#include <iostream>		// 헤더파일

// 입력, 출력
int main()
{	// 메모리값 = 할당 받아야 할 사이즈
	int num = 20;		// int : type, 자료형(크기)★★

	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}

// 문자 : 문자 1개 -> ' '
// 문자열 : 2개이상의 문자 -> " "
// std::cout << ...;		-> 출력
// std::cin >> ...;			-> 입력