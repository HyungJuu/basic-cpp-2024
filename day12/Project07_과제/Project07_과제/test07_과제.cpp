#include <iostream>
using namespace std;

// �θ�Ŭ����
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

	printf("-----��ǰ���� ���α׷�-----\n");
	printf("1. ��ǰ�߰� / 2. ��ǰ��� / 3. ��ǰ �˻� / 0. ����\n");
	cout << "��ȣ �Է� >> ";
	cin >> num;
	cout << endl;

	if (num != 0)
		printf("1. å / 2. �ڵ��� / 3.��ǻ��\n");




	return 0;
}