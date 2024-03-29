﻿/* 문제4
판매원들의 급여 계산 프로그램을 작성해보자. 이회사는 모든 판매원에게 매달 50만원의
기본 급여와 물품 판매가격의 12%에 해당하는 돈을 지급한다. 예를 들어서 민수라는 친구의
이번 달 물품 판매 금액이 100만원이라면, 50 + 100 * 0.12 = 62, 따라서 62만원을 급여로
지급받는다.
단, 아래의 실행 예에서 보이듯이 이러한 급여의 계산은 -1이 입력될 때까지 계속되어야 한다.

판매 금액을 만원 단위로 입력(-1 to end) : 100
이번 달 급여 : 62만원
판매 금액을 만원 단위로 입력(-1 to end) : 200
이번 달 급여 : 74만원
판매 금액을 만원 단위로 입력(-1 to end) : -1
프로그램을 종료합니다.
*/

#include  <iostream>

int main()
{
	int sellPrice;
	while(1)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin >> sellPrice;
		if (sellPrice > 0)
		{
			int salary;
			salary = 50 + sellPrice * 0.12;
			std::cout << "이번 달 급여 : " << salary << "만원" << std::endl;
		}
		if (sellPrice == -1)
		{
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		}
	}

	return 0;
}