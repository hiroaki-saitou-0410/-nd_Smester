
#include<stdio.h>
#include<string.h>
#include"CharacterBase.h"

//�R�s�[�R���X�g���N�^�̒�`
//�N���X��::�R���X�g���N�^(const �N���X��&�@����)
//{
//}
CharacterBase::CharacterBase(const CharacterBase& cb)
{
	printf("CharacterBase::�R�s�[�R���X�g���N�^\n");
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
	//�ϐ�copy���L���Ȃ̂́ACreateCopy���܂łȂ̂ŁA�Ăяo�������Ŏg�����߂ɂ́A�߂�l�ϐ��Ƃ���������̂�
	//�l����(�߂�l = copy)���Ă��邽�߁A�R�s�[�R���X�g���N�^���Ăяo�����
	CharacterBase copy(m_Hp,m_Mp);
	return copy;
}
