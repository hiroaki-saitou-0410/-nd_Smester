
#ifndef ENEMY_H
#define ENEMY_H

#include"Base.h"

class Enemy :public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

public:
	//引数の矩形情報と、自分が当たっているか判断
	bool CheckHit(int x, int y, int wifth, int height);

private:
	//行動管理用の変数
	int m_Routine;
};

#endif // !ENEMY_H

