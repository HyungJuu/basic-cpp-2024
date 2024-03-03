/*
다음 main함수에서 필요로 하는 swap 함수를 오버로딩해서 구현해보자.
*/

#include <iostream>

void swap(int* a, int* b)	// 주소를 받을 수 있는 포인터 변수를 선언
{
	int num = *a;	// int 타입의 변수 num에 지역변수 num1에 들어있는 데이터(주소)를 저장
	*a = *b;		// 포인터변수 a에 포인터변수 b를 저장한다.
	*b = num;		// 포인터변수 b에 변수 num에 저장해놓은 num1의 주소값을 저장한다.
}

void swap(char* a, char* b)
{
	char ch = *a;
	*a = *b;
	*b = ch;
}

void swap(double* a, double* b)
{
	double dbl = *a;
	*a = *b;
	*b = dbl;
}

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);		// 변수 num1, num2의 주소를 인자로 전달
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;

	return 0;
}