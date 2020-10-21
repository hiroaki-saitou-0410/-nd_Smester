
#include<stdio.h>
#include<stdlib.h>
#include"Base.h"
#include"Player.h"
#include"Enemy.h"
#include <string>

void PrintStatus(std::string nama, Base* target);

int main()
{
	//Base* base = new Base;

	/*Player player;
	player.SetMoveSpeed(5.0f);*/
	Base* player = new Player();
	player->SetMoveSpeed(5.0f);

	/*Enemy enemy;
	enemy.SetHp(100);*/
	Base* enemy = new Enemy();
	enemy->SetHp(100);

	//別々のクラスであろうと、基底クラスのポインタ配列を使って
	//処理をまとめて行うことができる
	Base* pBase[] =
	{
		player,
		enemy
	};
	std::string name[] =
	{
		"Player",
		"Enemy"
	};

	printf("-------------\n");
	printf("PRACTICE03_02\n");
	printf("-------------\n");

	//別々のクラスを１つの処理にまとまてあげることができる
	for (int i = 0; i < 2; i++)
	{
		pBase[i]->Exec();
		pBase[i]->Draw();
		pBase[i]->CheckHit(10, 10, 20, 30);
		PrintStatus(name[i].c_str(), pBase[i]);
	}
	/*pBase = &player ;
	pBase->CheckHit(10, 10, 20, 30);
	PrintStatus("Player", pBase);

	pBase = &enemy;
	pBase->CheckHit(10, 10, 20, 30);
	PrintStatus("Enemy", pBase);*/
	delete player;
	player = nullptr;
	delete enemy;
	enemy = nullptr;

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
