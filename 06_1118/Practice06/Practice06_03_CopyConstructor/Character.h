
#ifndef CHARACTER_H
#define CHARACTER_H

//#define PATTERN_01 //対策その１　動的に確保しない
//#define PATTERN_02 //対策その2 関数でポインター渡しにする
#define PATTERN_03 //対策その3　コピーコンストラクタで対策
/* コピーコンストラクタ
■重要な注意点
	クラスのメンバ変数に、動的に確保するインスタンスがある場合
	コピーコンストラクタで正しく対策をとらないと、
	メモリアクセス違反などのバグが発生してしまう

	解決策
		１、動的に確保しない(メモリが無駄になるが、配列で確保しておく)
		２、関数で渡す際に、値渡しでなく、ポインタ渡しなどにする
			参照渡しでもOK
		３、コピーコンストラクタで、正しい対策をとる

	結論
		動的に確保するかどうかは、配列の数やサイズに応じて臨機応変に。
		
*/

class Character
{
public:
	// デフォルトの引数付きコンストラクタ
	Character(const char* name, int hp, int mp);
#ifdef  PATTERN_03
	Character(const Character* ch);
#endif //  PATTERN_03

	virtual ~Character();

	const char* GetName() const { return m_pName; }
	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

protected:
#ifdef PATTERN_01
	//動的確保せず、あらかじめ最大文字数分の配列をとる
	char* m_pName[32];
#else
	char* m_pName;
#endif
	int m_Hp;
	int m_Mp;
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