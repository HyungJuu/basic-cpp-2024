#include <iostream>
using namespace std;	// std 이름공간을 사용하겠다.

class FruitSeller
{
private: // 멤버변수, 속성, 필드
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public: // 멤버함수, 메서드, 기능						// 생성자(기능 : 객체를 생성하고 초기화한다)
	void InitMembers(int price, int num, int money)		// (price, num, money) 변수를 받아서
	{
		APPLE_PRICE = price;	// APPLE_PRICE 필드에 저장
		numOfApples = num;		// numOfApples 필드에 저장
		myMoney = money;		// myMoney 필드에 저장
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;		// 사과 판매 개수
		numOfApples -= num;					// 남은 사과 개수 
		myMoney += money;					// 번 돈 (복합대입연산자) => myMoney = myMoney + money;
		return num;
	}

	void ShowSalesResult()
	{
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
//private: // 접근제어 지시자 (생략할 수도 있음)
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
															// int& num = n;			& = 참조연산자
	void BuyApples(FruitSeller& refseller, int money)		// FruitSeller& seller : seller라는 변수의 주소를 받겠다. seller의 타입 = FruitSeller
	{						// 객체 seller의 별칭(참조) refseller로 받는다. 동일한 객체를 받지만 참조변수는 BuyApples() 안에서만 사용가능
		numOfApples += refseller.SaleApples(money);	// 다른 객체에 있는 값을 이용
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;		// 객체 seller를 통해 접근 , 스택 영역에 생성됨, 힙 영역에 생성할때는 new
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;		// 객체 buyer를 통해 접근
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000); // seller(객체) 전달

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}

// new 연산자는 힙영역에 ClassName이라는 크기의 메모리를 할당하고 그 주소를 리턴한다.
