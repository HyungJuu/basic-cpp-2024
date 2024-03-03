#include <iostream>
using namespace std;

class AClass
{
private:  
	int num;

public:		// 외부에서 접근허용 => 접근제어 지시자
	AClass(int anum)	// 생성자(초기화 담당) : 클래스명과 동일	// 하나의 정수값을 받아서 
	{
		num = anum;		// num 이라는 필드에 저장
	}

	void AInfo()
	{
		cout << "A::num : " << num << endl;
	}
};

int main()
{
	AClass a(10);
	a.AInfo();

	return 0;
}