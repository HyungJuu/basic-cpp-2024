/* 문제2
* 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력받아서,
* 입력받은 데이터를 그대로 출력하는 프로그램을 작성해보자.
*/

#include <iostream>

int main()
{
	char name[20];
	char pnum[20];
	
	std::cout << "이름을 입력하세요 >> ";
	std::cin >> name;
	std::cout << "전화번호를 입력하세요 >> ";
	std::cin >> pnum;

	std::cout << "이름 : " << name << std::endl;
	std::cout << "전화번호 : " << pnum << std::endl;

	return 0;
}