#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray	
{
private:
	int* arr;
	int arrlen;

public:
	BoundCheckIntArray(int len) : arrlen(len)		// 생성자
	{
		printf("생성자 호출\n");
		arr = new int[len];		// 힙영역에 int형 배열 할당
	}

	int& operator[] (int idx)
	{
		printf("[]연산자함수 호출\n");
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			BoundCheckIntArray::~BoundCheckIntArray();
			exit(1);
		}
		return arr[idx];
	}

	~BoundCheckIntArray()
	{
		printf("소멸자 호출");
		delete[]arr;
	}
};

int main()
{
	BoundCheckIntArray arr(5);		// 객체 arr 생성-> 5 전달

	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;

	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;

	return 0;
}