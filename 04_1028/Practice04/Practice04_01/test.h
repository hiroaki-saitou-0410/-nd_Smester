
#ifndef TEST_H
#define TEST_H

class Test
{
public:
	Test();
	~Test();

	void SetValue(int value);
	int GetValue();
	void PrintValue();

	//static�����o�ϐ��̏�����
	//static�߂�l�֐���(����)
	static void SetStaticValue(int value_);

	//Test�N���X���g���Ă�����̂������邩�\��
	static void printCount();

private:
	int value;

	//static�����o�ϐ��̏�����(�錾��)
	//static �^�� �ϐ���
	static int staticValue;

	//����Ă�����Ԃ̐�
	static int instanceCount;

};

#endif // !TEST_H

