
#ifndef VECTOR2D_H
#define VECTOR2D_H


//2次元ベクトルクラス
class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_X; }
	float GetY() const { return m_Y; }

	//ベクトルの長さを求める
	float GetLength() const;

	// = オーバーロード
	Vector2D& operator = (const Vector2D& vec);
	// += オーバーロード
	Vector2D& operator += (const Vector2D& vec);
	// + オーバーロード
	Vector2D operator + (const Vector2D& vec);
	// + オーバーロード(m_X,m_Yへ同じ数値を足す)
	Vector2D operator + (float val);

	// > オーバーロード
	bool operator > (const Vector2D& vec)const;

private:
	float m_X;
	float m_Y;
};


#endif // !VECTOR2D_H
