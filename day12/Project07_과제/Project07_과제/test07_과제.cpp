#include <iostream>
using namespace std;

// 부모클래스
class Product
{
private:
	string id;
	int price;
	string producer;

public:
	Product(string aid, int aprice, string aproducer)
		: id(aid), price(aprice), producer(aproducer)
	{ }

};




int main()
{
	int num;

	printf("-----상품관리 프로그램-----\n");
	printf("1. 상품추가 / 2. 상품출력 / 3. 상품 검색 / 0. 종료\n");
	cout << "번호 입력 >> ";
	cin >> num;
	cout << endl;

	if (num != 0)
		printf("1. 책 / 2. 핸드폰 / 3.컴퓨터\n");




	return 0;
}