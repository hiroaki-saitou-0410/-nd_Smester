
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
	//�����̋�`���ƁA�������������Ă��邩���f
	bool CheckHit(int x, int y, int wifth, int height);

private:
	//�s���Ǘ��p�̕ϐ�
	int m_Routine;
};

#endif // !ENEMY_H

