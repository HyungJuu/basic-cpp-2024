/*
	C++ 타입의 구조체 : 구조체 멤버로 멤버 변수와 멤버 함수를 가진다.
*/

#include <iostream>

typedef struct human {		// human 구조체(사용자 정의 자료형)
	char name[20];			// 속성변수(name, age,job)
	int age;
	char job[20];

	void showHuman()		// 기능 : 멤버함수  // 구조체 안의 함수이므로 구조체를 불러올 필요가 없다.
	{
		printf("name :  %s / age : %d / job : %s\n", name, age, job); // 구조체에서 정의된 변수 그대로 사용
	}

}Human;		// 앞으로 human 구조체를 Human으로 사용


int main()
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" };	// Human 타입의 변수를 선언하고 초기화
	h1.showHuman();
	
	return 0;
}