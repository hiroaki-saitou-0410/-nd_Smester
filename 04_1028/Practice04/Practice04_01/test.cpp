
#include<stdio.h>
#include"test.h"

//static�����o�ϐ��̏�����(��`��)
//�^���@�N���X��::�ϐ���(=�����l)
//���Fstatic�����o�ϐ��́A�錾�ƕʂɎ��̂�����Ă����K�v
//	�@���Ԃ����Ƃ��́A�K��cpp���Ɋe����
int Test::staticValue = 0;
int Test::instanceCount = 0;

Test::Test()
{
	value = 0;
	instanceCount++;
}

Test::~Test()
{
	instanceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::PrintValue()
{
	printf("value = %d\n", value);
	printf("staticValue = %d\n", staticValue);
}

//static�����o�ϐ��̏�����(��`��)
//�߂�l::�֐���(����)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;
	//��:static�����o�ϐ��̒��ł́A
	//	�@static�łȂ������o�ϐ��𑀍삷�邱�Ƃ͂ł��Ȃ�
	//value = value_;	error���o��
}
void Test::printCount()
{
	printf("Instance Count=%d\n", instanceCount);
}