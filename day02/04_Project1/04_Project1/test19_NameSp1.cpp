#include <iostream>


namespace BestComImpl // BestComImpl 이라는 이름의 공간 생성
{
	void SimpleFunc(void) // 함수정의
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl // ProgComImpl 이라는 이름의 공간 생성
{
	void SimpleFunc(void) // 함수정의
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc(); // BestComImpl(이름공간) 내에 정의된 함수 SimpleFunc() 호출
	ProgComImpl::SimpleFunc(); // ProgComImpl(이름공간) 내에 정의된 함수 SimpleFunc() 호출
	return 0;
}

// 연산자 :: => 범위지정 연산자(이름공간을 지정할때 사용)