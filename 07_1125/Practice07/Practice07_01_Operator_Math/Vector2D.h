#pragma once
#ifndef VECTOR2D_H
#define VECTOR2D_H

/*
戻り値の型　Vector2D operator + (const 参照引数);

クラスオペレーターとして用意するなら
	Vector2D operator + (const Vector2D& rhs);
	
	戻り値の型
		Character& クラス参照
		
	引数
		Character&　vec	右辺のデータ型も参照型
		
	呼び出し方の例
		Character& vec1;
		Character& vec2;
		
		vec1 +vec2; この時にoperator +が呼び出される
		
メリット
	・クラス内の全メンバ変数に対して、同じ計算をする時、コーディング短縮できる
	・直感的に使うことができる
	・通常ならば、AddPosなどの関数を用意する必要がある
	
注意点
	・Vector2Dのx,yに対し、個別で値を加算、取得したい場合は、通常通り、AddPos,GetPosなどの関数を
	用意する必要がある　　operator +だけではXに足すのかYに足すのか判断できないため*/

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_X; }
	float GetY() const { return m_Y; }

	// = オーバーロード
	Vector2D& operator = (const Vector2D& vec);
	// += オーバーロード
	Vector2D& operator += (const Vector2D& vec);
	// + オーバーロード
	Vector2D operator + (const Vector2D& vec);

private:
	float m_X;
	float m_Y;
};


#endif // !VECTOR2D_H
