// 인라인(inline)함수
// 매크로 함수
#include <iostream>
/*
// 매크로함수는 자료형에 독립적
#define SQUARE(x) ((x)*(x))

int main(void)
{
	std::cout << SQUARE(5) << std::endl;		// int형
	std::cout << SQUARE(3.15) <<std::endl;		// double형
	return 0;
}
*/
// 장점 : 함수가 인라인화 되어 성능향상
// 단점 : 함수정의방식이 일반함수에 비해 복잡 -> 복잡한 함수정의에는 한계가 있다.

// inline => 컴파일러에 의해 처리
/*
inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}
*/


