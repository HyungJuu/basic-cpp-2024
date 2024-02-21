﻿#include <iostream>

using namespace std; // main()함수 안의 std 선언을 생략할 수 있다.

int main() {

	// 변수선언을 할때 코드의 가독성을 높이기 위해 한곳에 모아서 작성하기
	int a = 10;
	int b = 20;
	int c = 30;
	int ary[3] = { 10 ,20, 30 }; // int 타입의 방 3개를 할당받아서 각각 10,20,30을 집어넣는다
	ary[0] = 1111; // ary 배열의 0번째 방(인덱스[0])에 1111을 집어넣어라
	ary[1] = 100;

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	return 0;
}