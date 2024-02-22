#include <iostream>

using namespace std;

int& FuncOne(int n)
{
	int num = 20;
	num += n;
	return num;		// num = 30
}

int main(void)
{
	int& ref = FuncOne(10);	// ref = 30
	ref = 10;

	return 0;
}