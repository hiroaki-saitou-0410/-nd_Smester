
#include <iostream>
#include"CharacterBase.h"
#include"Enemy00.h"

//
void PrintParam(const CharaterBase& character);
int main()
{
	CharaterBase* pEnemy = new Enemy00();
	PrintParam(*pEnemy);

	return 0;
}

void PrintParam(const CharaterBase& character)
{
	printf("Character Parameter List\n");
	printf("------------------------\n");
	printf("Hp = %3d\n", character.GetHp());
	printf("Mp = %3d\n", character.GetMp());
}