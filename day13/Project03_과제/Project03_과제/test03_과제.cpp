/*
	vector ��ü�� �����ϰ� ������ �Է� ���� ������ ���Ϳ� �����ϰ� ����� ����Ͻÿ�.
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
		cout << "���� �Ѱ� �Է�(���� : 0) >> ";
		cin >> val;
        if (val == 0)
        {
			break;
        }

		v.push_back(val);
        sum += val;

		double avr = double(sum) / v.size();	// ����� �Ҽ������� ����ϱ� ���ؼ� sum�� double�� ����ȯ
        cout << "��� : " << avr << endl;
	}

	cout << "<<���α׷� ����>>" << endl;
	
	return 0;
}

