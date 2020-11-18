
#include <iostream>
#include"Character.h"

int main()
{
	{
		Character charcactor("山田太郎", 10, 8);
#ifdef PATTERN_02
		PrintParam(&charcactor);
		PrintParam(&charcactor);
#else
		PrintParam(charcactor);
		PrintParam(charcactor);
#endif // PATTERN_02

	}
}
