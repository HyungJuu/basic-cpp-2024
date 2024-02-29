# Basic-cpp-2024
IoT 시스템개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	- C++에 대해 설명

- 제어문
	- 선택제어문 
		- if, switch
		- if, else 문(C언어종류) / elif = Python
		- 반복문 For
		- 반복문 While
		- Overloading(재정의), Overriding
		
	- 반복제어문 
		- for,while
		- for(초기식; 조건식; 증감식){
			1. 초기식을 가지고 조건식을 따진다.
			2. 참이면 for문의 실행문 실행
			3. 증감식을 실행
			4. 조건식을 따지고
			2.
			3.
			4.
			2.
			3.
			4.
			.
			.
			.
		}

	
- 지역변수 = 로컬변수
	- 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)

- 자료형
	- 문자 : 문자(char), 문자열
	- 숫자 : 정수(int), 실수
	
- 정수로 계산하기
	



## 2일차
- class 안에 들어 가는 함수 = Method

- Default Value
- Name Space
- 전역, 지역변수
- C에서 메모리
	- 스택 : 지역변수, 매개변수
	- HEAP : 사용자에게 할당된 영역
		= Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다
	- data: 함수, 전역변수, 상수, 문자 리터럴
		
-------------- clang04_test--------------

## 3일차
- const 참조자
- 임시변수
	- const 참조자를 이용하여 상수를 참조할 때
	
- cpu만 사용하는 메모리 : 레지스터

- C++
	=> Malloc() = new() -> free()= delete() 반환
	
- class 안에 이름이 같은 함수 = 메서드(Method)
- 오버로딩 = 다중정의

- 클래스(class)
	- 객체(Object) : 변수
	- 멤버변수
		- 클래스를 구성하는(클래스 내에 선언된) 변수
	- 멤버함수
		- 클래스를 구성하는(클래스 내에 정의된) 함수

  멤버변수는 public() 함수를 붙이고 멤버함수는 private()함수를 붙인다.

- 접근제어 지시자
	- public : 클래스 외부에서도(어디든) 접근 허용 -> 멤버변수, 필드, 속성
	- protected	
	- private : 클래스 내에서만 접근 허용 -> 멤버함수, 메서드, 기능

- C++에서의 파일분할
		- 파일명.h : 헤더파일. 클래스의 선언을 담는다.
		- 파일명.cpp : 클래스의 정의(멤버함수의 정의)를 담는다.
	
## 4일차
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
- 얕은복사 : 디폴트 복사 생성자
- 깊은복사

- explicit : 복사 생성자의 묵시적 호출을 허용X
			-> 대입 연산자를 이용한 객체의 생성 및 초기화 불가능


- friend

- static : 정적 데이터 영역에 생성 -> 함수를 빠져나가도 소멸(초기화)되지 않는다.

## 7일차
- static 멤버변수(클래스변수) -> static 변수선언;
- static 멤버변수 초기화 -> 클래스명::클래스변수 = 초기화;


## 8일차

## 9일차 

## 10일차