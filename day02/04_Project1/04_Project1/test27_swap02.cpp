#include <iostream>

using namespace std;

/*
	swap함수 구현하기
*/
void swap(int *aa, int *ab)	// 주소를 받을수 있는 포인터 변수를 선언
{
	int temp;
	temp = *aa;				// 주소의 데이터를 참조. 지역변수 a 에 들어있는 데이터를 참조
	*aa = *ab;
	*ab = temp;
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
// int* ptr = &num1;		*ptr -> 포인터변수 => 주소저장  / &num1
// int &num2 = num1;		&num2 -> 참조변수 = 또다른 변수의 이름을 저장
