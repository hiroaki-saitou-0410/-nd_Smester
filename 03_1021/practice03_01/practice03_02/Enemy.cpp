
#include<stdio.h>
#include<stdlib.h>
#include"Enemy.h"

Enemy::Enemy()
{
	m_Routine = 0;
}

Enemy::~Enemy()
{
}

//引数の矩形情報と、自分が当たっているか判断
bool Enemy::CheckHit(int x, int y, int wifth, int height)
{
	//仮に、当たらなかったことにする
	printf("Base：NoContact!\n");
	return false;
}

void Enemy::Exec()
{
}

void Enemy::Draw()
{
}

