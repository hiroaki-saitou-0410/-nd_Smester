#include"Base.h"
#include<stdio.h>

Base::Base()
{
	m_Hp = 0;
	m_PosX = 0;
	m_PosY = 0;
	m_MoveSpeed = 0;

	m_Wifth = 10;
	m_Height = 10;

	printf("Base:�R���X�g���N�^\n");
}

Base::~Base()
{
	printf("Base:�f�X�g���N�^�[\n");
}

//�����̋�`���ƁA�������������Ă��邩���f
bool Base::CheckHit(int x, int y, int wifth, int height)
{
	//���ɁA������Ȃ��������Ƃɂ���
	printf("Base�FNoContact!\n");
	return false;
}

void Base::SetHp(int hp)
{
	hp = m_Hp;
}

void Base::SetPos(float x, float y)
{
	x = m_PosX;
	y = m_PosY;
}

void Base::SetMoveSpeed(float speed)
{
	speed = m_MoveSpeed;
}

int Base::GetHp()
{
	return m_Hp;
}

float Base::GetPosX()
{
	return m_PosX;
}

float Base::GetPosY()
{
	return m_PosY;
}

float Base::GetMoveSpeed()
{
	return m_MoveSpeed;
}

