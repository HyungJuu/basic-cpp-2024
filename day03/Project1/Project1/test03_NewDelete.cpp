#include <iostream>
#include <string.h>
using namespace std;

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];		// C++ : heap 영역에 len 크기만큼 char타입의 배열 메모리 공간을 할당
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);
	delete[]str;	// C++ : 할당받은 메모리를 반환
	return 0;		// new 연산자를 통해 할당받은 char타입의 배열을 소멸(삭제)
}