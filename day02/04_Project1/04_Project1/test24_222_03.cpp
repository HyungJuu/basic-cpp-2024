#include <iostream>

using namespace std;

int global = 100;
int global1 = 200;

int main()
{
	const int num = 10; // const : 값을 변경할 수 없다 = num변수를 상수화시킨다.
	//num = 100;

	cout << num << endl;

	return 0;
}