
#ifndef CHARATER_BASE_H
#define CHARATER_BASE_H
#include"Definition.h"

class CharaterBase
{
public:
	CharaterBase();
	virtual ~CharaterBase();

	void SetHp(int hp) { m_Hp=hp;}
	void SetMp(int mp) { m_Mp=mp;}

	int GetHp() const{ return m_Hp; }
	int GetMp() const{ return m_Mp; }

	EnemyType GetEnemyType() { return m_Type; }

protected:
	int m_Hp;
	int m_Mp;
	EnemyType m_Type;
};
#endif // CHARATER_BASE_H
