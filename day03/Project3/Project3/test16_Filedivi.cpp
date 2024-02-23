#include <iostream>
#include "test15_Filedivi.h"
using namespace std;

AClass::AClass(int anum)
{
	num = anum;
}

void AClass::AInfo()
{
	cout << "AClass::num : " << num << endl;
}

int main()
{
	AClass a(10);
	a.AInfo();

	return 0;
}