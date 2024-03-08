#include <iostream>
#include <vector>
using namespace std;

class Grade
{
private:
	char* name;
	int ko, eng, math;

public:
	Grade(const char* myname, int myko, int myeng, int mymath)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);

		this->ko = myko;
		this->eng = myeng;
		this->math = mymath;

	}
	~Grade()
	{
		printf("소멸자 호출\n");
		delete[]name;
	}

	char* getName() { return name; }

	int getKo() { return ko; }

	int getEng() { return eng; }

	int GetMath() { return math; }

	int sum()
	{
		int num = ko + eng + math;
		return num;
	}

	double avr()
	{
		double avr = sum() / 3.0;
		return avr;
	}
};

int main()
{
	//Grade* gradeAry[3];		// 객체 포인터 배열
	char name[20];
	int inKo = 0;
	int inEng = 0;
	int inMath = 0;
	int student = 0;

	cout << "학생 수 입력 : ";
	cin >> student;
	cout << endl;

	vector<Grade> gradeAry(student);		// 동적으로 배열을 할당받는다. -> 성적을 처리할 학생수를 입력하면 그만큼의 방만 만들어진다.


	// 1. 입력을 받는다.
	for (int i = 0; i < student; i++)
	{
		cout << "이름 : ";
		cin >> name;
		cout << "국어점수 : ";
		cin >> inKo;
		cout << "영어점수 : ";
		cin >> inEng;
		cout << "수학점수 : ";
		cin >> inMath;
		cout << endl;

		//cout << name << inKo << inEng << inMath << endl;

		// 2. 객체 생성 : 5개의 객체를 생성. 객체배열 or 객체포인터 배열
		gradeAry[i] = new Grade(name, inKo, inEng, inMath);
	}

	printf("\n*******학생당 총점 및 평균*******\n");

	for (int i = 0; i < student; i++)
	{
		//cout <<"총점 : "<< gradeAry[0]->sum() << "\t평점 : " << gradeAry[0]->avr() << endl;
		printf("%s 학생 총점 : %d, 평점 : %.1lf\n",gradeAry[i].getName(), gradeAry[i].sum(), gradeAry[i].avr());
	}

	int sumKo = 0;
	int sumEng = 0;
	int sumMath = 0;

	for (int i = 0; i < student; i++)
	{
		sumKo += gradeAry[i].getKo();
		sumEng += gradeAry[i].getEng();
		sumMath += gradeAry[i].GetMath();
	}
	printf("\n*******과목당 총점 및 평균*******\n");
	printf("국어 총점 : %d, 평균 : %.1lf\n", sumKo, sumKo/ float(size(gradeAry)));
	printf("영어 총점 : %d, 평균 : %.1lf\n", sumEng, sumEng / float(size(gradeAry)));
	printf("수학 총점 : %d, 평균 : %.1lf\n", sumMath, sumMath / float(size(gradeAry)));

	/*
	for (int i = 0; i < 3; i++)
	{
		printf("객체 할당 소멸자 호출\n");
		delete gradeAry[i];
	}
	*/

	return 0;
}