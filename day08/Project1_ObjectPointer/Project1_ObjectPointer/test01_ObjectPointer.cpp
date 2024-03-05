#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

// Person <- Student
class Student : public Person	// Person 클래스를 상속받는다. -> Person형(부모) 포인터 변수는 Student(자식) 객체를 가리킬 수 있다.
{
public:
	void Study() { cout << "Study" << endl; }
	void Sleep() { cout << "Studnet Sleep" << endl; }	// 상속 관계에서 -> 자식 객체 안에 동일한 이름의 Sleep 객체가 있으면 -> 오버로딩
														// 상속 관계가 아니면 -> 오버라이딩
};

// Person <- Student
class PartTimeStudent : public Student	// Student 클래스를 상속받는다. 또한 Student 클래스가 Person 클래스를 상속받으므로 Person 간접 상속받는다.
{										// -> Person형(부모) 포인터 변수는 PartTimeStudent(자식) 객체를 가리킬 수 있다.
public:
	void Work() { cout << "Work" << endl; }
};

int main()
{
	//Student* ptr0 = new Student();	원칙 : 동일한 타입으로 사용하는 것
	/*
		부모타입의 객체 포인터로 자식 객체를 가리킬 수 있다.
		하지만 자식타입의 객체 포인터로 부모 객체는 가리킬 수 없다.
		그리고 접근은 객체 포인터의 타입을 따른다.
	*/
	Person* ptr1 = new Student();
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();	// ptr1 객체포인터 변수는 Person 타입, 실제로 가리키는 객체는 Student (자식객체)
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;

	return 0;
}
// 포인터로 객체에 접근할때는 애로우(->) 사용