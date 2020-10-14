
#include<stdio.h>
#include<stdlib.h>
#include"Player.h"
#include"Enemy.h"


int main()
{
	Player player;
	player.GetMoveSpeed(5.0f);

	Enemy enemy;
	enemy.GetHp(100);

	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");

	printf("Player Status\n");
	printf("hp = %d\n", player.GetHp());
	printf("PosX = %0.2f\n", player.GetPosX());
	printf("PosY = %0.2f\n", player.GetPosY());
	printf("MoveSpeed = %0.2f\n", player.GetMoveSpeed());
	printf("\n");

	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");

	printf("Player Status\n");
	printf("hp = %d\n", enemy.GetHp());
	printf("PosX = %0.2f\n", enemy.GetPosX());
	printf("PosY = %0.2f\n", enemy.GetPosY());
	printf("MoveSpeed = %0.2f\n", enemy.GetMoveSpeed());
	printf("\n");

	system("pause");
	return 0;
}
