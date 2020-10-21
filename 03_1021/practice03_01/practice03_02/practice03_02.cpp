﻿
#include<stdio.h>
#include<stdlib.h>
#include"Base.h"
#include"Player.h"
#include"Enemy.h"
#include <string>

void PrintStatus(std::string nama, Base* target);

int main()
{
	Player player;
	player.SetMoveSpeed(5.0f);

	Enemy enemy;
	enemy.SetHp(100);

	Base* pBase = nullptr;
	
	printf("-------------\n");
	printf("PRACTICE03_02\n");
	printf("-------------\n");

	pBase = &player;
	pBase->CheckHit(10, 10, 20, 30);
	PrintStatus("Player", pBase);

	pBase = &enemy;
	pBase->CheckHit(10, 10, 20, 30);
	PrintStatus("Enemy", pBase);

	

	system("pause");
	return 0;
}

//ステータス表示
void PrintStatus(std::string nama, Base* target)
{
	if (target ==nullptr)
	{
		return;
	}
	printf("%s Status\n",nama.c_str());
	printf("hp = %d\n", target->GetHp());
	printf("PosX = %0.2f\n", target->GetPosX());
	printf("PosY = %0.2f\n", target->GetPosY());
	printf("MoveSpeed = %0.2f\n", target->GetMoveSpeed());
	printf("\n");
}
