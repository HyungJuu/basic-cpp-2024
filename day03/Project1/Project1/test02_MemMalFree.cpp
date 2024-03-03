#include <iostream>
#include <string.h>
#include <stdlib.h>

//#define _CRT_SECURE_NO_SARNINGS
using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);	// C : heap 영역에 20Byte 크기로 메모리 공간 할당
	printf("char size : %llu\n", sizeof(char));		// char 타입의 크기를 출력하는 코드
	return str;
}

// MakeStrAdr() : 변수 len을 받아서 길이가 
int main(void)
{
	char* str = MakeStrAdr(20);		// MakeStrAdr() 함수를 호출하여 길이가 20인 문자열을 할당하고 포인터변수 str에 저장한다.
	strcpy(str, "I am so happy~");	// strcpy() 함수를 통해 "I am so happy~" 문자열을 str이 가리키는 메모리에 복사한다.
	cout << str << endl;
	free(str);						// 힙 영역에 할당된 메모리 공간을 소멸
	return 0;
}

