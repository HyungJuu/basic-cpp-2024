/*
	C 타입의 구조체 : 멤버로 멤버 변수만 가진다.
*/

#include <stdio.h>

/*
	구조체 -> 앞에 'struct'가 붙어야 한다.
	문자열(char)
	배열 -> 같은 타입을 여러개 나열
*/

// 구조체 앞에 typedef -> {} 함수 정의 후 Human;
typedef struct human {		// human 구조체(사용자 정의 자료형)
	char name[20];			// 속성 : 맴버변수(name, age, job) 
	int age;
	char job[20];	// 문자열(char) 타입의 크기 20의 배열 메모리 공간 할당
}Human;		// 앞으로 human 구조체를 Human으로 사용하겠다. 이렇게 하지 않으면 사용할 때마다 struct human 이라고 써야한다.

// Human 구조체를 매개변수로 받는 함수 정의
void showHuman(Human h)	// 멤버함수
{
	printf("name : %s / age : %d / job : %s\n", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" };		// Human 타입의(구조체) 변수를 선언하고 초기화를 시킨다.
	showHuman(h1);		// 함수호출


	return 0;
}
