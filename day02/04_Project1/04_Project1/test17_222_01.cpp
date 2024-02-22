#include <iostream>

#define SQUARE(X) ((X)*(X)) // 매크로 : 사용하는 타입의 제한을 받지 않는다.

using namespace std;

int main()
{
	cout << SQUARE(5) << endl;
	return 0;
}