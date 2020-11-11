#ifndef ENEMY01_H
#define ENEMY01_H

#include"CharacterBase.h"
class Enemy01 : public CharaterBase
{
public:
	Enemy01();
	~Enemy01();

	void SetVariation(int variatio) { m_Variation = variation; }
	void SetRoutine(int routine) { m_Routine = Routine; }

private:
	int m_Variation;
	int m_Routine;
	int variation;
	int Routine;
};

#endif // !ENEMY01_H
