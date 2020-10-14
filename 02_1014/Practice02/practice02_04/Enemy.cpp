
#include<stdio.h>
#include<stdlib.h>
#include"Enemy.h"

Enemy::Enemy()
{
	m_Hp = 0;
	m_PosX = 0;
	m_PosY = 0;
	m_MoveSpeed = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Exec()
{
}

void Enemy::Draw()
{
}

void Enemy::GetHp(int hp)
{
	hp = m_Hp;
}

void Enemy::GetPos(float x, float y)
{
	x = m_PosX;
	y = m_PosY;
}

void Enemy::GetMoveSpeed(float speed)
{
	speed = m_MoveSpeed;
}

int Enemy::GetHp()
{
	return m_Hp;
}

float Enemy::GetPosX()
{
	return m_PosX;
}

float Enemy::GetPosY()
{
	return m_PosY;
}

float Enemy::GetMoveSpeed()
{
	return m_MoveSpeed;
}
