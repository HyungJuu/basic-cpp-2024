/*
메모리 동적할당 : new 연산자 사용
프로그램 실행중에 메모리를 할당받는다.
*/

#include <iostream>
using namespace std;

int main()
{

	cout << "int size : " << sizeof(int) << endl;		// int 타입 크기 : 4 byte
	int *pi = new int;		// new : 4 byte 크기만큼 힙영역에 메모리 공간을 할당받는다. -> int 타입의 메모리 주소를 리턴
							// *pi -> int 타입의 포인터변수(*)임을 나타냄

	*pi = 10;				// 포인터 변수가 가리키는 곳의 값(데이터)

	cout << "pi가 가리키는 곳에 저장된 값 : " << *pi << endl << endl;

	delete pi;				// 동적 할당받은 메모리 공간을 반환한다.
	
	int *pary = new int[10];	// 힙영역에 int 타입의 배열공간을 10만큼 할당받는다. -> pary(포인터변수)에 int 타입의 메모리 주소를 리턴

	for (int i = 0; i < 10; i++)		
	{
		pary[i] = i + 10;		// 배열의 각 방에 원소(요소)값을 집어넣는다. pary[0] = 10 ...
	}

	for (int i = 0; i < 10; i++)
	{
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete []pary;		// 배열로 동적 할당받은 메모리를  반환한다.

	return 0;
}

// new(힙영역에 메모리 동적할당) - delete(반환) 한쌍으로 기억