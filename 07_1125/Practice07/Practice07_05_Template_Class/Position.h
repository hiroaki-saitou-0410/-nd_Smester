#ifndef POSITION_H
#define POSITION_H

/*�e���v���[�g�N���X
�@�T�v
    �N���X�̃����o�ɑ΂��ăe���v���[�g���g�����N���X
    
   ������
    template<class T>
    {
        T �����o�ϐ�
        
        T �֐���(����)
        {
        }
    };

    �N���X�O�̏ꍇ
    template<typename �p�����[�^��>
    �߂�l�̌^�@�N���X��<�p�����[�^��>::�֐���(����)
    {
    }

�⑫
    �E�e���v���[�g���g�����N���X�̂��Ƃ�ėp�N���X�ƌĂ񂾂肷��
    �Etypename��class�ɂ��ẮA���̋@�\�ɈႢ�͂Ȃ�
    �@���̃e���v���[�g���g������ T �̌^�� class �ł���\��������Ȃ�class int��Afloat�Ȃǂ�
     �@�f�[�^�^�ł���ꍇ�� typename ���g�����[���ɂ��邱�ƂŃR�[�h�̉ǐ����グ�邱�Ƃ��ł���
    �ET �Ə����������́A�ϐ��Ɠ��l�Ȗ��O�ł��\��Ȃ�
    'T'emplate�Ȃ̂ŁAT �Ƃ��ĉ�����Ă���Z�p����T�C�h������

���ӓ_
    �N���X�̃e���v���[�g�ɂ��ẮA��{�I�ɒ�`(����)���܂߂��ׂăw�b�_�[�t�@�C���ɏ����悤�ɂ���
    ��cpp��p�ӂ��Ă�����ɒ�`(����)�������ƁA�΍���Ƃ�Ȃ�����G���[���o�Ă��܂�
*/

template<class T>
class Position
{
public:
    Position()
        :m_PosX(0)
        ,m_PosY(0)
    {
    }

public:
    void SetPosX(T x_) { m_PosX = x_; }
    void SetPosY(T y_) { m_PosX = y_; }

    T GetPosX() const{return m_PosX; }
    T GetPosY() const{return m_PosX; }

    // + �I�[�o�[���[�h(�N���X�O�ł̎�����)
    T operator + (const Position& pos_);
    // = �I�[�o�[���[�h
    T& operator = (const Position& pos_);

private:
    T m_PosX;
    T m_PosY;
};

//�e���v���[�g�N���X�̊֐���`�@�N���X�O
template<class T>
T Position<T>::operator + (const Position& pos_)
{
    Position ans;   //���<T>�^�p��Position�ł���Ɛ錾���Ă���̂ŁA�����ł͕s�v
    ans.SetPosX(this->GetPosX() + pos_.GetPosX());
    ans.SetPosY(this->GetPosY() + pos_.GetPosY());
}

template<class T>
T& Position<T>::operator = (const Position& pos_)
{
    this->SetPosX(pos_.GetPosX());
    this->SetPosY(pos_.GetPosY());
    
}
#endif // !POSITION_H
