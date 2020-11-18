#pragma once
#ifndef ENEMY_H
#define ENEMY_H

/*namespace 名前空間の書き方
  namespace namaspaceの名前
    {
        //グローバル変数や、クラス定義、など
    }
*/
namespace Enemy
{
    static const int Max = 10;		//敵の最大数

    //namespaceに属しているデータを使う時の書き方()
    //namespace名::は省略できる

    void PrintMax()
    {
        printf("敵の最大数 = %d\n", Max);
    }
}

#endif // !ENEMY_H
