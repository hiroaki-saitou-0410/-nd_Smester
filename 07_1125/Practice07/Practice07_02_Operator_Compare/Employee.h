
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/*��r���Z�q( ==,!=,<,>,<=,>= )�̃I�y���[�^�[
������
	�߂�l�̌^�@Vector2D operator + (const �Q�ƈ���);

	�N���X�I�y���[�^�[�Ƃ��ėp�ӂ���Ȃ�
		bool Employee operator == (const Vector2D &vec) const;

	�߂�l�̌^
		bool ��r���ʂ�treu,false��

	����
		

	�Ăяo�����̗�

		vec1 + vec2; ���̎���operator + ���Ăяo�����

���ӓ_
	�E�����o�ϐ��̂����y�����z��r���Ă���̂����킩��悤�ȃN���X�\�����Ă���
	����̂悤�ɁAm_Post,m_Salary�͂ǂ������r�ΏۂɂȂ肤�邽�߁A
	emp1 > emp2�Ƃ����Ƃ��ɁAm_Post�Ŕ�r���Ă���̂��Am_Salary�Ŕ�r���Ă���̂��킩��ɂ���
	�E��r������ϐ����P�����ɍi��A�R�����g*/

class Employee
{
public:
	enum POST
	{
		STAFF,			//�Ј�
		SEVTION_CHIEF,	//�ے�
		MANAGER,		//����
		PRESIDENT,		//�В�
	};

	Employee(POST post_);

	void ShowPost();
	POST GetPost() const;

	//
	bool operator > (const Employee& emp_)const;

private:
	POST m_Post;	//��E
	int m_Salary;	//����
};

#endif // !EMPLOYEE_H
