// 이름공간
// 존재하는 이름공간이 다르면 동일한 이름의 함수 및 변수를 선언하는 것이 가능하다.
#include <iostream>
using namespace std;
/*
namespace BestComImpl		// BestComImpl 이라는 이름의 공간
{
	void SimpleFunc(void)
	{
		cout << "BestCom이 정의한 함수" << endl;
	}
}

namespace ProgComImpl		// ProgComImpl 이라는 이름의 공간
{
	void SimpleFunc(void)
	{
		cout << "ProgCom이 정의한 함수" << endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();		// :: => 범위 지정 연산자
	ProgComImpl::SimpleFunc();		// 각각의 이름공간에 정의된 SimpleFunc()를 호출한다.
	return 0;
}
*/

namespace BestComImpl
{
	void SimpleFunc(void);		// 함수 선언
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)		 // 함수 정의
{
	cout << "BestCom이 정의한 함수" << endl;
}

void ProgComImpl::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}

// 선언된 이름공간의 이름이 동일하다면 같은 이름공간으로 간주한다.
// 이름공간을 명시하지 않고 함수를 호출하면 호출문이 존재하는 함수와 동일한 이름공간 안에서 호출할 함수를 찾는다.
