#include <iostream> // 헤더파일 선언문

int main()
{
	int val1, val2;		// int 타입(정수) 두개 선언 : 지역변수 -> 함수 내에서만 사용가능하다.
	std::cout << "숫자 두개를 입력하세요 > ";		// std::cout << 출력대상;
	std::cin >> val1 >> val2;	// 이처럼 변수값을 연달아 입력받을 수 있다. ex) 4 5
	//std::cin >> val1;
	//std::cin >> val2;

	std::cout << "입력된 숫자는 " << val1 << ", " << val2 << "입니다." << std::endl;	// std::endl; 은 엔터와 같은 기능을 한다. 개행으로 출력된다.
	
	char name[20];
	std::cout << "이름을 입력하세요 : ";
	std::cin >> name;
	
	std::cout << "이름 : " << name << std::endl;
	return 0;
}