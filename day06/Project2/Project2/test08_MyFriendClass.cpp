#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy
{
private:
	int height;
	friend class Girl;

public:
	Boy(int len) : height(len)
	{ }
	void ShowYourFriendInfo(Girl& frn);		// ShowYourFriendInfo(Girl&) 로 매개변수 이름을 생략할 수 있다.(함수 선언에서만) type은 생략 불가
};

class Girl
{
private:
	char phNum[20];

public:
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}

	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number : " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height : " << frn.height << endl;
}

int main()

{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}
