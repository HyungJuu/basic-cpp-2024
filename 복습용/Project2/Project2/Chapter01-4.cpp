// �ζ���(inline)�Լ�
// ��ũ�� �Լ�
#include <iostream>
/*
// ��ũ���Լ��� �ڷ����� ������
#define SQUARE(x) ((x)*(x))

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	return 0;
}
*/
// ���� : �Լ��� �ζ���ȭ �Ǿ� �������
// ���� : �Լ����ǹ���� �Ϲ��Լ��� ���� ���� -> ������ �Լ����ǿ��� �Ѱ谡 �ִ�.

// inline => �����Ϸ��� ���� ó��
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

