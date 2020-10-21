
#ifndef ENEMY_MANAGER_H
#define ENEMY_MANAGER_H

#include<vector>
//エネミー管理クラス
class EnemyManager
{
public:
	EnemyManager();				//コンストラクタ
	~EnemyManager();	//デストラクタ

public:
	//エネミーを生み出す
	class Base* CreateEnemy(int enemy_type);
	//エネミーを削除
	bool DestoryEnemy(class Base* ptr);
	//エネミーの処理
	void Exec();
	//エネミーの描画
	void Draw();
	//矩形とエネミーの当たり判定
	class Base* CheckHit(int x, int y, int width, int height);

private:
	//エネミーの管理
	std::vector<class Base*> m_Enemies;
};


#endif // !ENEMY_MANAGER_H
