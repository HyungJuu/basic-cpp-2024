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

// 자식클래스
class Book : public Product
{
private:
	string ISBN; 	// 고유번호  ex) 978-89-001-0001-1
	string author;	// 저자
	string title;	// 제목
};

class Handphone : public Product
{
private:
	string model;	// 모델명
	int RAM;		// 램 크기
};


class Computer : public Product
{
private:
	string model;	// 모델명
	int cpu;		// cpu 크기
	int RAM;		// 램 크기
};

int main()
{
	int num;

	while (1)
	{
		printf("-----------------상품관리 프로그램-----------------\n");
		printf("1. 상품추가 / 2. 상품출력 / 3. 상품검색 / 0. 종료\n");
		cout << "번호 입력 >> ";
		cin >> num;
		cout << endl;

		if (num == 1)
		{
			printf("상품추가 >> 1. 책 / 2. 핸드폰 / 3.컴퓨터\n");
			cout << "번호 입력 >> ";
			cin >> num;
			cout << endl;

			if (num == 1)
			{
				printf("책\n");
			}
			if (num == 2)
			{
				printf("핸드폰\n");
			}
			if (num == 3)
			{
				printf("컴퓨터\n");
			}
		}
		if (num == 2)
		{
			printf("상품출력 >> \n");
		}

		if (num == 3)
		{
			printf("상품검색 >> \n");
		}

		if (num == 0)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}

	return 0;
}