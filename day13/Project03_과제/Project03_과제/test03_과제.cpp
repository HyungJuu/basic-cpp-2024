/*
	vector 객체를 생성하고 정수를 입력 받을 때마다 벡터에 삽입하고 평균을 출력하시오.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int val;
    int sum = 0;

	while (true)
	{
		cout << "정수 한개 입력(종료 : 0) >> ";
		cin >> val;
        if (val == 0)
        {
			break;
        }

		v.push_back(val);
        sum += val;

		double avr = double(sum) / v.size();	// 평균을 소수점까지 계산하기 위해서 sum을 double로 형변환
        cout << "평균 : " << avr << endl;
	}

	cout << "<<프로그램 종료>>" << endl;
	
	return 0;
}

