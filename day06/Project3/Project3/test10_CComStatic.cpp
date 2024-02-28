#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;		// static : 정적 데이터 영역에 생성 -> 함수를 빠져나가도 소멸(초기화)되지 않는다.
	//int cnt = 0;
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}
// int cnt = 0; 으로 코드를 작성하면 메인함수에서 반복제어문이 실행될 때 Counter() 함수를 호출하고 닫힐 때 cnt 또한 소멸
// 그 결과 for문이 실행되는 동안
// 실행할 때마다 Counter() 함수를 새롭게 실행 => cnt 또한 초기화 되었으므로 출력이 계속 1이 나온다.

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}
	return 0;
}