/*
char ary[] = {'a', 'b', 'c', 'd', 'e', 'f'}
조건 : while문과 if문만으로 배열 순서를 역순으로 바꾸어 저장출력하시오
*/

#include <iostream>
using namespace std;

int main()
{
	
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int length = sizeof(ary) / sizeof(ary[0]);
    //cout << length << endl;     // 6
    int i = length - 1;

    while (i >= 0) 
    {
        cout << ary[i] << ' ';
        i--;

        /*if (i % 2 == length % 2) 
        {
            cout << ary[i] << ' ';
            i--;
        }

        else 
        {
            cout << ary[i] << ' ';
            i--;
        }*/
    }
       return 0;
}