#include "Character.h"
#include <stdio.h>
#include <string.h>

// デフォルトの引数付きコンストラクタ
Character::Character()
	:m_job(Freeter)
{
	printf("通常のコンストラクタ\n");
}

Character::Character(const Character& ch)
	:m_job(ch.Getjob())
{
	printf("コピーコンストラクタ\n");
}

Character::~Character()
{
}

//オペレーターの定義部分
Character& Character::operator=(Character& ch)
{
	printf("代入演算子のオーバーロード\n");
	m_job = ch.Getjob();

	/*this(thisポインタ)
		オペレーターの左辺値のデータはこの関数を呼び出ししているクラスのインスタンスである
		実はクラスの関数には、thisという、関数を呼び出したインスタンス自身を目指す
		専用のポインタ変数が隠れて存在している*/
	return *this;
}

void PrintParam(Character ch)
{
}