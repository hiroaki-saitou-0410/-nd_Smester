#pragma once
#ifndef ENEMY_H
#define ENEMY_H

/*namespace ���O��Ԃ̏�����
  namespace namaspace�̖��O
    {
        //�O���[�o���ϐ���A�N���X��`�A�Ȃ�
    }
*/
namespace Enemy
{
    static const int Max = 10;		//�G�̍ő吔

    //namespace�ɑ����Ă���f�[�^���g�����̏�����()
    //namespace��::�͏ȗ��ł���

    void PrintMax()
    {
        printf("�G�̍ő吔 = %d\n", Max);
    }
}

#endif // !ENEMY_H
