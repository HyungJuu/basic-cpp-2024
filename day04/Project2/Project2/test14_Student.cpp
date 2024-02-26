#include <iostream>
using namespace std;

class StudentClass
{
private:
	const int ID;		// 학번 상수화 -> 변경불가능. 선언과 함께 초기화를 시켜야 한다.
	char Name[20];		// 이름 -> [배열]
	char Major[20];		// 전공 -> [배열]
	int Age;			// 나이	

// 문자열은 주소이기 때문에 포인터 변수에 넣어서 사용한다. -> 문자열의 첫번째 문자 주소가 저장된다.
// 멤버 이니셜라이저 : 객체 생성시 초기화되지 않는 멤버들을 초기화할때 사용한다. 즉, 객체생성과 상관없이 미리 초기화가 되는 멤버들 초기화
public:
	StudentClass(int id, const char *name, const char *major, int age) : ID(id)	// -> 멤버 이니셜라이저 : 초기화(객체가 생성되기 전에 초기화)	// 생성자
	{				  // const -> 원본이 바뀌면 안되기 때문에. 문자열은 정적데이터영역에 저장된다.
		//ID = id;
		strcpy(Name, name);		//strcpy : 문자열 복사
		strcpy(Major, major);	// 문자열 배열을 선언하고 바로 초기화하지 않는 경우 strcpy()를 통하여 초기화한다.
		Age = age;
	}

	void StudentInfo() 
	{
		cout << "학 번 : " << ID << endl;
		cout << "이 름 : " << Name << endl;
		cout << "전 공 : " << Major << endl;
		cout << "나 이 : " << Age << endl;
	}
};

int main()
{
	StudentClass sc(2020643008, "김근아", "토목공학과", 25);	// 객체를 생성 => 생성자 호출
	sc.StudentInfo();
	return 0;
}