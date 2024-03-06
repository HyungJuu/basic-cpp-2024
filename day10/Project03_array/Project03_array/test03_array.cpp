/*
	배열의 표현식
*/
#include <iostream>
using namespace std;

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

/*
	arr 주소 : 0000009280CFF828
	arr 크기 : 20

	arr[0] 주소 : 0000009280CFF828
	arr[1] 주소 : 0000009280CFF82C
	arr + 1 : 0000009280CFF82C

	parr 주소 : 0000009280CFF858
	parr 데이터 : 0000009280CFF828
	parr + 1 : 0000009280CFF82C

	parr[0] : 1      *pa : 1         arr[0] : 1
*/