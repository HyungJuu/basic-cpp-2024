# Basic-cpp-2024
IoT 시스템개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행

- C++ 기초
	- 함수 정의
	```c++
	int main()
	{
		return 0;
	}
	// int -> 함수 출력(출력이 없을 때 : void) --> 출력이 있으면 return은 필수
	// main -> 함수명
	// ( ) -> 함수 입력(입력이 없을 때 : void)
	// { } -> 함수 정의
	```

	- 변수 선언
		- RAM으로부터 저장공간을 할당받는다.
		- type(자료형) : 할당받을 공간의 크기
			- 문자 : 문자(char), 문자열
			- 숫자 : 정수(int), 실수

	- 문자/문자열 입출력
		- std::cout<<	: 출력
		- std::cin>>	: 키보드로부터의 입력

	- 제어문
		- 선택제어문 : if, switch
			- if, else 문(C언어종류) / elif = Python

		- 반복제어문 : for,while
			- for(초기식; 조건식; 증감식) { }
				1. 초기식을 가지고 조건식을 따진다.
				2. 참이면 for문의 실행문 실행
				3. 증감식을 실행
				4. 조건식을 따지고 조건식이 참일 때 2-4 과정 반복
			- while(조건식) { }

	- 함수 다형성
		- Overloading(다중정의) : 함수의 이름이 같아도 매개변수(입력)이 다른 것 -> 매개변수의 개수, 매개변수의 자료형...
		- Overriding(재정의) : 상속관계에서 사용됨
	```C++
	// 오버로딩 : 함수명은 같지만 매개변수의 타입(type)이 다르다.
	void MyFunc(void)
	{
		std::cout << "Myfunc(void) called" << std::endl;
	}

	void MyFunc(char c)
	{
		std::cout << "Myfunc(char c) called" << std::endl;
	}

	void MyFunc(int a, int b)
	{
		std::cout << "Myfunc(int a, int b) called" << std::endl;
	}
	```

	- 지역변수 = 로컬변수
		- 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)


## 2일차
// p.27 ~ 87
// class 안에 들어 가는 함수 = Method

- Default Value
- Reference(참조자) : &(참조연산자)
	- 참조자 수 제한X
	- 참조자를 대상으로 참조자를 선언하는 것도 가능
	- 상수를 대상으로 참조자 선언을 하는 것은 불가능
	- 선언과 동시에 참조해야 한다(대상 : 기본적으로 변수)
	```C++
	int num1 = 2759;	// 변수선언. int 타입의 num1이라는 이름의 메모리공간을 할당받아 2759를 저장한다.
	int &num2 = num1;	// 참조자선언. num1의 메모리 공간에 num2라는 이름을 추가로 붙인다.(별명, 별칭)
	int &num3 = num2;	// 참조자를 대상으로 참조자 선언
	int &num4 = num3;
	```

	![참조자](https://raw.githubusercontent.com/HyungJuu/basic-cpp-2024/main/images/reference.png)

- Name Space
- 전역, 지역변수
- C에서 메모리
	- 스택 : 지역변수, 매개변수
	- HEAP : 사용자에게 할당된 영역
		= Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다
	- data: 함수, 전역변수, 상수, 문자 리터럴
	``` C++
	// A & B = 비트 And 연산자
	// A && B = 논리 And 연산자 = 논리 곱
	```

## 3일차
// p.87 ~ 131
- const 참조자 -> 참조자를 통한 값의 변경을 진행하지 않을 경우
- 임시변수
	- 상수를 참조할 때 const 자료형을 이용하여 임시변수를 만들고 그 공간에 상수를 저장

- cpu만 사용하는 메모리 : 레지스터

- class 안에 이름이 같은 함수 = 메서드(Method)

- 클래스(class)
	- 객체(Object) : 변수
	- 멤버변수 : 속성, 필드
		- 클래스를 구성하는(클래스 내에 선언된) 변수
	- 멤버함수 : 메서드, 기능
		- 클래스를 구성하는(클래스 내에 정의된) 함수
	- 생성자
		- 클래스 이름과 메서드 이름이 동일

  멤버변수는 public() 함수를 붙이고 멤버함수는 private()함수를 붙인다.

- 접근제어 지시자
	- public : 클래스 외부에서도(어디든) 접근 허용 -> 멤버변수, 필드, 속성
	- protected
	- private : 클래스 내에서만 접근 허용 -> 멤버함수, 메서드, 기능

- C++에서의 파일분할
		- 파일명.h : 헤더파일. 클래스의 선언을 담는다.
		- 파일명.cpp : 클래스의 정의(멤버함수의 정의)를 담는다.

## 4일차
// p.136 ~ 174
- class(클래스) 정리
	- 멤버변수와 멤버함수로 구성된다.
	- 클래스 내부에는 멤버들의 선언으로 작성된다.
	- 멤버함수의 정의를 외부로 빼낸다.(스코프 연산자 사용)
	- 일반적으로 멤버변수는 private, 멤버함수는 public의 접근제한을 사용한다.

- 문자열 -> 주소이기 때문에 포인터변수에 넣어서 사용한다.
		 -> 문자열의 첫번째 문자 주소가 저장된다.

- strcpy() : 문자열 복사. 문자열배열을 선언하고 바로 초기화하지 않는 경우, strcpy()를 통해 초기화

- 멤버 이니셜라이저 : 객체 생성시 초기화되지 않는 멤버들을 초기화할 때 사용한다.
					   즉, 객체생성과 상관없이 미리 초기화가 되는 멤버들 초기화

## 5일차
// p.175 ~ 220
- 멤버 이니셜라이저 (이어서 정리)
	- 객체 생성(실행) 전에 선언과 동시에 초기화가 필요한 경우에 사용
	- const변수와 참조변수의 초기화에 사용

- 생성자(클래스 이름과 같은 멤버함수 / 출력은 X)
	- 객체 생성시 자동으로 호출되는 멤버함수
	- 모든 클래스는 디폴트 생성자를 가지고 있다.
	- 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가, 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
	- 멤버변수들의 초기화를 담당한다.
	- 오버로딩 가능 (매개변수 타입, 개수 등의 차이)

- 소멸자 : 클래스 이름(생성자 이름)앞에 '~'가 붙은 형태. 객체가 소멸시 반드시 호출되는 생성자 -> 오버로딩 불가

- new 연산자 : 힙영역에 메모리 할당

- 포인터배열 : 포인터를 저장하는 배열
- 배열 포인터 : 배열을 가리키는 포인터

- 복사 생성자 : 객체를 복사할 때 호출되는 생성자
				-> 따라서 복사할 객체를 입력으로 가져야 하는데 이때 원본 객체의 참조(&)를 입력으로 받아야 함
				-> 복사생성자를 객체로 받으면 받아들이는 과정에서 복사가 무한반복
``` C++
SoSimple sim2(sim1); // 복사생성자 호출
```

- 디폴트 생성자 : 기본적으로 제공되는 생성자. 생성자를 명시적으로 만들었을 때는 소멸(제공X).
				-> 디폴트 생성자가 필요할 경우에는 명시적으로 작성

- 디폴트 복사 생성자 : 복사 생성자를 정의하지 않을 때 자동으로 삽입 (얕은 복사)

## 6일차
// p.221 ~ 255
- 얕은복사 : 디폴트 복사 생성자
- 깊은복사

- explicit : 복사 생성자의 묵시적 호출을 허용X
			-> 대입 연산자를 이용한 객체의 생성 및 초기화 불가능


- friend

- static : 정적 데이터 영역에 생성 -> 함수를 빠져나가도 소멸(초기화)되지 않는다.

## 7일차
// p.256 ~ 311
- static 멤버변수(클래스변수) -> 형태 : static 변수선언;
	- 객체 생성마다 함께 생성되는 변수가 아니라 메모리 공간에 하나만 할당
	- 각 개체들은 변수에 접근할 수 있는 권한만 가짐

- static 멤버변수 초기화 -> 클래스명::클래스변수 = 초기화;

- 상속
```c++
class Person
{
private:
	char name[50];
	int age;
public:
{
	// ...
}

class UnivStudent : public Person	// : public 상속받을 부모클래스명
{	// 자식클래스
	// Person 클래스를 상속받는다.
private:
	string major;		// 문자열

public:
	UnivStudent(const char* myname, int myage, string mymajor) : Person(myname, myage)	// 부모클래스 생성자 : Person(myname, myage)
	{		// 부모 클래스 생성자를 호출하여 부모클래스 멤버변수를 초기화
		cout << "자식생성자 실행" << endl;
		this->major = mymajor;
		//strcpy(major, mymajor);
	}
	// ...
};
```

- protected 접근제한
	- 상속한 자식 클래스에서의 접근을 허용
	- protected보다 접근 범위가 넓은 멤버는(public) protected로 변경시켜서 상속
	- private < protected < public

## 8일차
// p.326 ~ 382
- 부모 객체 포인터는 자식 객체 포인터를 가리킬 수 있다. (부모 -> 자식) ( 부모 <- 자식 X )

- 다형성(Polymorphism)
	- 부모 타입의 객체 포인터는 부모클래스의 객체 뿐만 아니라, 부모클래스를 상속하는 자식 클래스도 가리킬 수 있다
	- 객체 포인터 변수: 객체의 주소 값을 저장하는 포인터 변수(객체를 가리키는 포인터 변수)

- 오버로딩(Overloading) : 다중 정의
	- 메서드의 이름은 동일, 매개변수의 유형과 개수가 다름

- 오버라이딩(Overriding) : 재정의, 상속관계에서 사용
	- 상위 클래스가 가지고 있는 메서드를 하위클래스가 재정의해서 사용

```C++
class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person	// Person 클래스를 상속받는다
{								// -> Person형(부모) 포인터 변수는 Student(자식) 객체를 가리킬 수 있다.
public:
	void Study() { cout << "Study" << endl; }
	void Sleep() { cout << "Studnet Sleep" << endl; }	
	// 상속 관계에서 -> 자식 객체 안에 동일한 이름의 Sleep 객체가 있으면 -> 오버로딩
	// 상속 관계가 아니면 -> 오버라이딩
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

	ptr1->Sleep();	// ptr1 객체포인터 변수는 Person 타입, 실제로 가리키는 객체는 Student (자식객체)
					// 하지만 객체포인터 ptr1의 타입인 Person의 Sleep()을 출력한다.

	return 0;
}
// 포인터로 객체에 접근할때는 애로우(->) 사용
```

- 가상함수(Virtual Function)
	- 가상함수 선언 : virtual
	- 포인터의 자료형 기반X, 포인터 변수가 실제로 가리키는 객체를 참조하여 호출 대상 결정
	
- 순수 가상함수
	- 함수의 몸체가 정의되지 않는 가상함수
	- 순수 가상함수를 가지는 클래스(=추상클래스) => 객체 생성 불가능


## 9일차
// p.402 ~ 455
- 연산자 오버로딩
	- operator 
	- 멤버함수에 의한 연산자 오버로딩
	- 전역함수에 의한 연산자 오버로딩
		- 동일한 자료형 기반으로 동시 오버로딩할 경우 : 멤버함수 기반 오버로딩 > 전역함수 기반 오버로딩
		
- 단항 연산자 오버로딩		
		- 증가(++), 감소(--) 연산자 오버로딩
		- 전위, 후위 구분(int)
		
- 대입연산자
	- 디폴트 대입연산자
		- 명시적으로 정의하지 않으면 디폴트 복사 생성자가 삽입
		- 멤버 대 멤버의 복사(얕은 복사)
		- 생성자 내에서 동적할당을 한다면, 깊은 복사가 필요하다면 '직접정의'


## 10일차
// p.456 ~ 485
- 대입연산자 추가 학습

- 배열 표현식
```C++
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };		//int형 배열선언
	int* parr = arr;	// 배열의 이름은 주소이다★★★★★

	printf("arr 주소 : %p\n", arr);
	printf("arr 크기 : %u\n", sizeof(arr));		// int크기 4 x 방 갯수 5 = 20 byte
	cout << endl;

	printf("arr[0] 주소 : %p\n", &arr[0]);		// arr 배열의 시작주소와 첫번째방의 주소가 같음
	printf("arr[1] 주소 : %p\n", &arr[1]);
	printf("arr + 1 : %p\n", arr + 1);		// arr : 시작주소. 즉 첫번째방 arr[0]에서 +1(다음주소) -> arr[1]
	cout << endl;

	printf("parr 주소 : %p\n", &parr);		// 포인터변수의 주소
	printf("parr 데이터 : %p\n", parr);		// 배열 arr의 주소를 저장하고 있다.
	printf("parr + 1 : %p\n", parr + 1);	// 배열 첫번째방의 주소와 같다.
	cout << endl;

	printf("parr[0] : %d\t *pa : %d\t arr[0] : %d\n", parr[0], *parr, arr[0]);

	return 0;
}
```
- 그 외 연산자 오버로딩

	- new 연산자
		- 메모리 공간의 할당만 오버로딩 가능
		- 반환형은 반드시 void 포인터형, 매개변수형은 size_t
		
	- delete 연산자
		- 오버로딩된 함수의 메모리 공간 소멸을 담당

	- 포인터 연산자
		- (->) : 포인터가 가리키는 객체의 멤버에 접근
		- ( * )  : 포인터가 가리키는 객체에 접근 
		
		```C++
		// (*num) = 30; == (num.operator*()) = 30;
		// num->ShowData(0; == num.operator->() -> ShowData();
		```

	- 스마트 포인터(Smart Pointer)
		- 포인터의 역할을 하는 객체
		- 객체 소멸을 위한 delete 연산은 자동으로 이루어짐
		
- 펑터(Functor)
	- 함수처럼 동작하는 클래스 = 펑터(Functor) 또는 함수 오브젝트(Function Object)
	- 함수 또는 객체의 동작방식에 유연함을 제공할 때 사용

## 11일차
// p.489 ~ 537

- 임시 객체로의 자동 형변환과 형변환 연산자

- string 클래스

- 함수 템플릿
	- 함수를 만드는 도구
	- 다양한 자료형의 함수를 만들 수 있음
	- template <typename T> 또는 template <class T> 선언(같은 의미)
	
	```C++
	/*
	int Add(int num1, int num2)
	{
		return num1 + num2;
	}
	*/
	
	// 위의 함수를 템플릿으로 만들면 아래와 같다
	template <typename T>	// T라는 이름으로 아래의 함수를 템플릿으로 정의한다는 의미
	T Add(T num1, T num2)	// T -> 자료형을 결정짓지 않는다는 것
	{
		return num1 + num2;
	}
	
	```
	
## 12일차
// p.536 ~ 564

- 함수 템플릿 이어서
	- 재활용의 측면에서 매우 좋음 -> 메인함수에서 사용하고싶은 자료형을 입력하기만 하면 됨
	- strcmp() : 매개변수로 들어온 두개의 문자열을 비교하여 값을 반환
		- str1 > str2 : 양수(1) 반환
		- str1 < str2 :  음수(-1) 반환
		- str1 == str2 : 0 반환

	- 함수 템플릿 특수화
		- 필요에 따라 예외적으로 함수를 특정 자료형에 대해서 명시적으로 정의
		
		```C++
		template <>
		char* Max(char* a, char* b)		// 함수템플릿 특수화 : char*(자료형)에 대해서 명시적으로 정의
		{
			cout << "char* Max<char*>(char* a, char* b)" << endl;
			return strlen(a) > strlen(b) ? a : b;
		}
		```
		
- 클래스 템플릿
	- 선언과 정의 분리

	```C++
	// 파일분할
	
	// 헤더파일 (.h )
	template <typename T>
	class SimpleTemplate
	{
	public:
		T SimpleFunc(const T& ref);
	};

	// 소스파일 (.cpp 
	template <typename T>
	T SimpleTemplate<T>::SimpleFunc(const T& ref)
	{
		// ...
	}
	```
- Point 클래스 템플릿과 배열 클래스 템플릿
