/*
	반복제어문 : while문
*/

#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
		if (i == 11) break; // break 는 반복문을 빠져나올때 사용
	}
	cout << sum << endl;
	return 0;
}