#include"EnemyManager.h"
#include"Base.h"
#include"Enemy.h"


EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}

EnemyManager::~EnemyManager()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();itr != m_Enemies.end();++itr)
	{
		//newで確保した各Enemyクラスを削除
		Base* ptr = *itr;
		delete ptr;
		*itr = nullptr;

	}
	//m_Enemiesにはnulptrが入ったBase*の配列が入っている
	m_Enemies.clear();
}
Base* EnemyManager::CreateEnemy(int enemy_type)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
		itr != m_Enemies.end();
		++itr)
	{
		//可変長配列に空きがあればそこに作る
		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;
		}
	}
	//
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

//エネミーを削除
bool EnemyManager::DestoryEnemy(class Base* ptr)
{
	//ptrがnullptrだったら即リターン
	if (ptr == nullptr)
	{
		return false;
	}
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
		itr != m_Enemies.end();
		++itr)
	{
		//可変長配列にptrと同じアドレスを持つものがあれば削除
		Base* tmp = *itr;
		if (tmp == ptr)
		{
			delete* itr;
			*itr = nullptr;
			return true;

		}
	}
	return false;
}

void EnemyManager::Exec()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
		itr != m_Enemies.end();
		++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			ptr->Exec();
		}
	}
}

void EnemyManager::Draw()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
		itr != m_Enemies.end();
		++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			ptr->Draw();
		}
	}
}

Base* EnemyManager::CheckHit(int x, int y, int width, int height)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin();
		itr != m_Enemies.end();
		++itr)
	{
		if (*itr != nullptr)
		{
			//当たっていたらあアドバイス
			Base* ptr = *itr;
			if (ptr->CheckHit(x, y, width, height))
			{
				return ptr;
			}
		}
	}
	//for分を
	return nullptr;
}

