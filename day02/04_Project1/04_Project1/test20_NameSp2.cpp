#include <iostream>

namespace BestComImpl // 이름공간 안에 함수선언만 삽입
{
	void SimpleFunc(void);	// 함수 선언
}

namespace ProgComImpl 
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void) // 이름공간 BestComImpl에 선언한 함수 SimpleFunc의 정의부분
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}