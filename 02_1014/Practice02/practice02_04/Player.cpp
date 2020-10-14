
#include<stdio.h>
#include<stdlib.h>
#include"Player.h"

Player::Player()
{
	m_Hp = 0;
	m_PosX = 0;
	m_PosY = 0;
	m_MoveSpeed = 0;
}

Player::~Player()
{
}

void Player::Exec()
{
}

void Player::Draw()
{
}

void Player::GetHp(int hp)
{
	hp = m_Hp;
}

void Player::GetPos(float x, float y)
{
	x = m_PosX;
	y = m_PosY;
}

void Player::GetMoveSpeed(float speed)
{
	speed = m_MoveSpeed;
}

int Player::GetHp()
{
	return m_Hp;
}

float Player::GetPosX()
{
	return m_PosX;
}

float Player::GetPosY()
{
	return m_PosY;
}

float Player::GetMoveSpeed()
{
	return m_MoveSpeed;
}
