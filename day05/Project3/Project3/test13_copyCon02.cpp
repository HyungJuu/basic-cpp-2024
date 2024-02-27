#include <iostream>
using namespace std;

class AA
{
private:
	int a;
	int b;

public:
	AA(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	void AAInfo()
	{
		cout << a << " " << b << endl;
	}
};

int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();
	return 0;
}