#include <iostream>
#include <cstring>
using namespace std;

// Gun 클래스 선언
class Gun
{
private:
	int bullet;		// 장전된 총알의 수

public:
	Gun(int bnum) : bullet(bnum)
	{ }

	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
	
	int getbullet()		// Police 클래스에서 private에 선언된 bullet의 호출을 위해
	{
		return bullet;
	}

};

// Police 클래스 선언
class Police : public Gun // 클래스 Gun을 상속받고 있다.
{
private:
	int handcuffs;	// 소유한 수갑의 수

public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{ }

	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}

	void state()
	{	// cout << bullet << ", " << handcuffs << endl; 은 불가능 하다.
		// Police 클래스가 Gun 클래스를 상속받고 있지만 bullet은 private으로 선언되어 있다. private는 클래스 내에서만 접근 가능. 외부에서의 접근X
		// private으로 선언된 변수는 멤버함수를 통해서 호출할 수 있다. 그래서 public에 getbullet()이라는 함수를 만들어 bullet 값을 저장한다.
		// public은 클래스 외부에서도 접근이 가능
		// handcuffs는 해당 클래스 내에 있기때문에 불러오는것에 문제가 없다.
		cout << getbullet() << ", " << handcuffs << endl;
	}
};

int main()
{
	Police pman(5, 3);	// 총알 5, 수갑 3
	pman.state();		// 5, 3
	pman.Shot();		// BBANG!
	pman.PutHandcuff();	// SNAP!
	pman.state();		// 4, 2
	return 0;
}