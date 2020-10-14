
#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

public:
	void GetHp(int hp);
	void GetPos(float x, float y);
	void GetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int   m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;
};

#endif // !ENEMY_H

