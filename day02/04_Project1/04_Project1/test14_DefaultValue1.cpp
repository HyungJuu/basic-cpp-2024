/*
	date: 20240222
	desc : 매개변수 디폴트값
*/

#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 2) // 두개의 매개변수
{
	return num1+num2;
}

int main()
{
	cout << Adder() << endl; // 인자를 전달하지 않으면 디폴트값
	cout << Adder(5) << endl; // 인자를 하나만 전달하면 왼쪽부터 전달되고 나머지는 디폴트값
	cout << Adder(3, 5) << endl;
	return 0;
}