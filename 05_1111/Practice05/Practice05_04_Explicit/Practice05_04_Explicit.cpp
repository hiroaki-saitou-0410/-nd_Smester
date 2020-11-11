
#include <iostream>

class A
{
public:
	//explicit 演算子の書き方
	//explicrt コンストラクタ(引数)
	explicit A(int val)
//	A(int val)
	{
		std::cout << val << std::endl;
	}
};

class B
{
public:
	B(const A& ref)
	{

	}
};
int main()
{
	//引数を１つだけとるコンストラクタは、暗黙の型変換が行われる可能性がある
	//暗黙の型変換が行われるコンストラクタのことを、変換コンストラクタという
//	B b(1000);		//BのクラスのコンストラクタはAのクラスの参照を受け取るのでは？
					//暗黙的にB( A(1000) )とし解釈しちゃっている

//	A test = 100;	//Aのクラス変数にデータ型を代入？
					//暗黙的にA test=A(100)と解釈しちゃってる
					//コピーコンストラクタが呼び出されている

	A a(35);		//Aのクラスのコンストラク
					//問題なし

	return 0;
}
