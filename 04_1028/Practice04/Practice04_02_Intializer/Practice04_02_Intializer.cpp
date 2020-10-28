
#include <iostream>
#include<stdio.h>

class CharaBase
{
public:
	CharaBase();
	CharaBase(int hp,int mp);
	virtual ~CharaBase();

	void PrintParam();
private:
	int Hp;
	int Mp;

	const int HP_MAX = 999;
};

//コンストラクタでメンバイニシャライズによる初期化のやり方
//クラス名::コンストラクタ(引数):メンバ変数(初期化),メンバ変数(初期化)
CharaBase::CharaBase()
	:Hp(50)
	,Mp(10)
	,HP_MAX(999)	//const型のメンバ変数を初期化できる
{
	//従来の方法
	//Hp = 50;
	//Mp = 10;
	//HP_MAX=999;	コンストラクト内ではconst型のメンバ変数を初期化できない
}

CharaBase::CharaBase(int hp, int mp)
{
	Hp = hp;
	Mp = mp;
}

CharaBase::~CharaBase()
{
}

void CharaBase::PrintParam()
{
	printf("Hp = %d\n", Hp);
	printf("Mp = %d\n", Mp);
	printf("\n");
	printf("HP_MAX = %d\n", HP_MAX);
}

class Player :public CharaBase
{
public:
	Player();

private:
	int Money;
};

//補足：引数なしの基底クラスのコンストラクトは省略することができる
Player::Player()
	:CharaBase(200,30)
	,Money(50)
{

}
int main()
{
	//データ型にもコンストラクトはある
	int value(10);
	float f_value(10.0f);
	CharaBase ch;
	ch.PrintParam();

	Player Player;
	Player.PrintParam();
}
