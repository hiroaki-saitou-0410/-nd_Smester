
#ifndef CHARATER_BASE_H
#define CHARATER_BASE_H

class CharaterBase
{
public:
	CharaterBase();
	virtual ~CharaterBase();

	void SetHp(int hp) { m_Hp=hp;}
	void SetMp(int mp) { m_Mp=mp;}

	int GetHp() const{ return m_Hp; }
	int GetMp() const{ return m_Mp; }

protected:
	int m_Hp;
	int m_Mp;
};
#endif // CHARATER_BASE_H
