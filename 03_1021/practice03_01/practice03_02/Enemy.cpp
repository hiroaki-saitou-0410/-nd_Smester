
#include<stdio.h>
#include<stdlib.h>
#include"Enemy.h"

Enemy::Enemy()
{
	m_Routine = 0;
	printf("Enemy:�R���X�g���N�^\n");
}

Enemy::~Enemy()
{
	printf("Enemy:�f�X�g���N�^�[\n");
}

//�����̋�`���ƁA�������������Ă��邩���f
bool Enemy::CheckHit(int x, int y, int wifth, int height)
{
	//���ɁA������Ȃ��������Ƃɂ���
	printf("Base�FNoContact!\n");
	return false;
}

void Enemy::Exec()
{
}

void Enemy::Draw()
{
}

