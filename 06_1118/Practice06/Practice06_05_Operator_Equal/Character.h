
#ifndef CHARACTER_H
#define CHARACTER_H

/*代入演算子のオペレーター
書き方
	戻り値の型　operator =(引数)
	
クラスのオペレーターとして用意する場合
	Character*/
class Character
{
public:
	enum JOB
	{
		Freeter,	//無職
		Warrior,	//戦士
		Wizard,		//魔法使い
		Priest,		//
	};
	Character();
	Character(const Character* ch);
	virtual ~Character();

	//代入演算子(=)のoperator
	Character& operator = (Character& ch);

	JOB Getjob() const {return m_job; }
protected:
	JOB m_job;	//職業

};

#ifdef PATTERN_02
		//関数の引数へ値渡しをするのが問題なのでアドレスを渡す
		// パラメータを表示するだけ
		void PrintParam(Character* ch);
#else
		// パラメータを表示するだけ
		void PrintParam(Character ch);
#endif
#endif	// #ifndef CHARACTER_BASE_H
