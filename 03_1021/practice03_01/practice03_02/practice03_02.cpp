
#include<stdio.h>
#include<stdlib.h>
#include <string>
#include"Base.h"
#include"Player.h"
#include"Enemy.h"
#include"EnemyManager.h"

//#define PRACTICE03_1021		//10月21日授業分
void PrintStatus(std::string nama, Base* target);

int main()
{
#if defined(PRACTICE03_1021)
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

#else
	//10月28日に追加作業分
	//EnemyMAnagerの実行テスト
#endif
	//EnemyManagerを使ったEnemyクラスの管理の例

	//スレージ開始時点でまとめて初期化
	//引数はエネミーの種類を表す(enumなどがわかりやすい)
	EnemyManager* enemyMng = new EnemyManager();
	Base* pEnemy = nullptr;
	enemyMng->CreateEnemy(0);
	enemyMng->CreateEnemy(1);
	pEnemy = enemyMng->CreateEnemy(2);
	enemyMng->CreateEnemy(3);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);
	
	//指定したエネミーを削除
	enemyMng->DestoryEnemy(pEnemy);

	//作成したエネミーに各処理を行わせる
	enemyMng->Exec();
	enemyMng->Draw();

	//指定座標と接触しているエネミーを取得
	pEnemy = enemyMng->CheckHit(10, 10, 20, 30);

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
