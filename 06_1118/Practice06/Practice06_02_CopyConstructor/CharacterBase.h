
#ifndef CHARATER_BASE_H
#define CHARATER_BASE_H

/*�R�s�[�R���X�g���N�^
	�R�s�[�R���X�g���N�^�Ƃ�
	�C���X�^���X�ɑ���Ȃǂ��s�����ۂɎ��s��������ȃR���X�g���N�^
	��ɁA�C���X�^���X����ʂ̃C���X�^���X�ɃR�s�[����
	
�Ăяo�����P�[�X
	�E�C���X�^���X�ւ̑��(= ������Z�q)
	�E�֐��ɒl�n��������
	�E�C���X�^���X��߂�l�Ɏg����
	
�d�v�Ȓ��ӓ_
	�N���X�̃����o�ϐ��ɁA���I�Ɋm�ۂ���C���X�^���X������ꍇ
	�R�s�[�R���X�g���N�^�Ő������΍���Ƃ�Ȃ��ƁA�������A�N�Z�X�ᔽ�Ȃǂ̃o�O���������Ă��܂�
	
	������
		�P�D���I�Ɋm�ۂ��Ȃ�(�����������ʂɂȂ邪�A�z��Ŋm�ۂ��Ă���)
		�Q�D�֐��œn���ۂɁA�l�n���łȂ��A�|�C���^�n���Ȃǂɂ���
		�R�D�R�s�[�R���X�g���N�^�ŁA�������΍���Ƃ�
		*/

class CharacterBase
{
public:
	//�R�s�[�R���X�g���N�^�̏�����
	//�N���X��::�R���X�g���N�^(const �N���X��&�@����)
	CharacterBase(const CharacterBase& cb);

	//�f�t�H�̈����t���R���X�g���N�^
	CharacterBase(int hp, int mp);
	virtual ~CharacterBase();

	int GetHp() const{ return m_Hp; }
	int GetMp() const{ return m_Mp; }

	//�p�����[�^
	void PrintParam();
	
	//�_���[�W��^����
	//�l�n���ɂ��R�s�[�R���X�g���N�^�Ăяo���e�X�g
	void ReceiveDamege(CharacterBase attacker);

	//���g�𕡐�
	//�C���X�^���X��߂�l�Ɏg�����̃R�s�[�R���X�g���N�^�Ăяo���e�X�g
	CharacterBase CreateCopy();

protected:
	int m_Hp;
	int m_Mp;
};
#endif // CHARATER_BASE_H
