#include <iostream>

using namespace std;

inline int SQUARE(int x) // 단점 : 매개변수가 선언한 타입만 받을 수 있다.
{
	return x * x;
}

int main() 
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
	return 0;
}