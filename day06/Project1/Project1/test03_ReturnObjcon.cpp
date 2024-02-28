#include <iostream>
using namespace std;
 
class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{ }

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;	// 객체 자기자신 전달
	}

	void ShowData()
	{
		cout << "num : " << num << endl;
	}

};


SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();
	//SoSimple re = SimpleFuncObj(obj);
	obj.ShowData();
	return 0;
}