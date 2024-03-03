#include <iostream>

using namespace std;

/*
	swap함수 구현하기
*/
// swap() : 두 개의 참조변수 a, b를 받아, 두 값을 교환한다.
void swap(int *aa, int *ab)	// 주소를 받을수 있는 포인터 변수를 선언
{
	int temp;				// 임시변수 temp를 선언하고, aa가 가리키는 값을 저장한다.
	temp = *aa;				// 주소의 데이터를 참조. 지역변수 a 에 들어있는 데이터를 참조
	*aa = *ab;				// aa에 ab의 값을 대입한다.
	*ab = temp;				// ab에 임시변수 temp의 값을 대입한다.
}

int main()
{
	int a = 10;		// 지역변수
	int b = 20;

	cout << "before : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b); // 변수의 주소를 전달

	cout << "after : " << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}

//A & B			// 비트연산자 - A와 B를 논리곱 연산을 해라.
//A && B		// 논리연산자 - 논리곱: A도 참이고 B도 참인 경우 => 참

//  a	  	   0 0 1 1
//  b		   0 1 0 1
// &&(논리곱)  0 0 0 1

// A :		ob 1000 1111
// B :		0b 1011 0010
// A&B :	   1000 0010


// int& num2 = num1;
// int& num2 = 100;   대입연산자 오른쪽 = 리터럴(상수)


// int num = 10;			일반적인 변수선언
// int* ptr = &num1;		포인터 변수 ptr에 num1의 주소값(&num1)을 저장
// int &num2 = num1;		&num2 -> 참조변수 = 또다른 변수의 이름을 저장
