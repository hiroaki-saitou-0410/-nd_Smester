#pragma once
#ifndef VECTOR2D_H
#define VECTOR2D_H

/*
�߂�l�̌^�@Vector2D operator + (const �Q�ƈ���);

�N���X�I�y���[�^�[�Ƃ��ėp�ӂ���Ȃ�
	Vector2D operator + (const Vector2D& rhs);
	
	�߂�l�̌^
		Character& �N���X�Q��
		
	����
		Character&�@vec	�E�ӂ̃f�[�^�^���Q�ƌ^
		
	�Ăяo�����̗�
		Character& vec1;
		Character& vec2;
		
		vec1 +vec2; ���̎���operator +���Ăяo�����
		
�����b�g
	�E�N���X���̑S�����o�ϐ��ɑ΂��āA�����v�Z�����鎞�A�R�[�f�B���O�Z�k�ł���
	�E�����I�Ɏg�����Ƃ��ł���
	�E�ʏ�Ȃ�΁AAddPos�Ȃǂ̊֐���p�ӂ���K�v������
	
���ӓ_
	�EVector2D��x,y�ɑ΂��A�ʂŒl�����Z�A�擾�������ꍇ�́A�ʏ�ʂ�AAddPos,GetPos�Ȃǂ̊֐���
	�p�ӂ���K�v������@�@operator +�����ł�X�ɑ����̂�Y�ɑ����̂����f�ł��Ȃ�����*/

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_X; }
	float GetY() const { return m_Y; }

	// = �I�[�o�[���[�h
	Vector2D& operator = (const Vector2D& vec);
	// += �I�[�o�[���[�h
	Vector2D& operator += (const Vector2D& vec);
	// + �I�[�o�[���[�h
	Vector2D operator + (const Vector2D& vec);

private:
	float m_X;
	float m_Y;
};


#endif // !VECTOR2D_H
