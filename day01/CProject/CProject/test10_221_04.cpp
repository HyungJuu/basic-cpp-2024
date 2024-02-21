/*
	반복제어문 : for문
*/
#include <iostream>

using namespace std;

int main()
{
	int sum = 0; {
		for (int i = 0; i < 100; i++) {
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}