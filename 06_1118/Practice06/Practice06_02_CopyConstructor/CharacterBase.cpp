
#include<stdio.h>
#include<string.h>
#include"CharacterBase.h"

//コピーコンストラクタの定義
//クラス名::コンストラクタ(const クラス名&　引数)
//{
//}
CharacterBase::CharacterBase(const CharacterBase& cb)
{
	printf("CharacterBase::コピーコンストラクタ\n");
	m_Hp = cb.GetHp();
	m_Mp = cb.GetMp();
}

CharacterBase::CharacterBase(int hp, int mp)
	:m_Hp(hp)
	,m_Mp(mp)
{
}

CharacterBase::~CharacterBase()
{
}

void CharacterBase::PrintParam()
{
	printf("HP = %d\n", m_Hp);
	printf("MP = %d\n", m_Mp);
}

void CharacterBase::ReceiveDamege(CharacterBase attacker)
{
	printf("! ReceiveDamege !\n");
	m_Hp -= attacker.m_Mp;
}

CharacterBase CharacterBase::CreateCopy()
{
	//変数copyが有効なのは、CreateCopy内までなので、呼び出した側で使うためには、戻り値変数ともいえるものに
	//値を代入(戻り値 = copy)しているため、コピーコンストラクタが呼び出される
	CharacterBase copy(m_Hp,m_Mp);
	return copy;
}
