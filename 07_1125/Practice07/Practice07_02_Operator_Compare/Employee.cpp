
#include"Employee.h"
#include<stdio.h>

Employee::Employee(POST post_)
	:m_Post(post_)
	,m_Salary(15000)
{
}

void Employee::ShowPost()
{
	switch (m_Post)
	{
	case STAFF:			printf("平社員\n"); break;
	case SEVTION_CHIEF:	printf("課長\n"); break;
	case MANAGER:		printf("部長\n"); break;
	case PRESIDENT:		printf("社長\n"); break;
	}
}

Employee::POST Employee::GetPost() const
{
	return m_Post;
}

//オーバーロード
bool Employee::operator > (const Employee& emp_) const
{
	if (this->m_Post > emp_.GetPost())
	{
		return true;
	}
	return false;
}
