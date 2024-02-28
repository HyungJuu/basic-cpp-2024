#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;

public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}

	~Temporary()
	{
		cout << "destroy obj : " << num << endl;
	}

	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main()
{
	Temporary(100);		// Temporary t(100);  객체의 이름이 없는 형태 => 임시 객체로 생성
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "********** after make!" << endl << endl;

	//Temporary& ref = Temporary(300);			// 오류 발생
	const Temporary& ref = Temporary(300);		// 임시 객체에 대한 참조
	cout << "********** end of main!" << endl << endl;
	return 0;
}
// 임시객체는 참조를 할 수 없다. 임시객체는 주소X
// 참조를 하기 위해서는 const를 붙여야 한다.