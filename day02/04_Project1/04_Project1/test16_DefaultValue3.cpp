#include <iostream>

using namespace std;

int BoxVolume(int length, int width = 1, int height = 1); // 무조건 입력받아야 하는 매개변수가 하나 있다.

int main()
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	//cout << "[D, D, D] : " << BoxVolume() << endl;  // 입력받아야 하는 인자를 입력받지 않았기 때문에 에러 발생
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}