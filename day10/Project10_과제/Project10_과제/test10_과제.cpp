/*
다섯명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균,
그리고 과목별 총점과 평균을 구하시오.
*/

#include <iostream>
using namespace std;

class Grade
{
private:
	char* name;
	int kr;
	int math;
	int english;

public:
	Grade(const char* myname, int mykr, int mymath, int myeng)
		: kr(mykr), math(mymath), english(myeng)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
	}

	~Grade()
	{
		delete[]name;
	}

	int Sum() const		// 학생별 총점
	{
		return (kr + math + english);
	}

	int Average() const		// 학생별 평균
	{
		return Sum() / 3;
	}


	void ShowData() const
	{
		cout << "이름 : " << name << endl;
		cout << "총점 : " << Sum() << endl;
		cout << "평균 : " << Average() << endl << endl;
		cout << "===========================" << endl;
	}
};

int main()
{
	char name1[100];
	int kor1, math1, eng1;
	int num = 0;
	int sumKor = 0, sumMath = 0, sumEng = 0;

	cout << "학생 수 입력 >> ";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cout << "이름 입력 >> ";
		cin >> name1;

		cout << "국어점수 입력 >> ";
		cin >> kor1;

		cout << "수학점수 입력 >> ";
		cin >> math1;

		cout << "영어점수 입력 >> ";
		cin >> eng1;
		cout << endl;

		Grade s1(name1, kor1, math1, eng1);
		s1.ShowData();

		sumKor += kor1;
		sumMath += math1;
		sumEng += eng1;
	}

	cout << "국어과목 총점 : " << sumKor << "\t평균 : " << sumKor / num << endl;
	cout << "수학과목 총점 : " << sumMath << "\t평균 : " << sumMath / num << endl;
	cout << "영어과목 총점 : " << sumEng << "\t평균 : " << sumEng / num << endl;

	return 0;
}