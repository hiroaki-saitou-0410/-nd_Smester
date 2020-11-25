
#include <iostream>
#include"Employee.h"

int main()
{
	Employee satou(Employee::POST::STAFF);
	Employee deguti(Employee::POST::PRESIDENT);

	satou.ShowPost();
	deguti.ShowPost();

	if (deguti > satou)
	{
		printf("degutiさんの方が偉い\n");
	}
	else
	{
		printf("satouさんの方が偉い...です！！\n");
	}
	return 0;
}
