
#include <iostream>
#include"Position.h"

int main()
{
    //テンプレートクラスの使い方
    //クラス名<データ型>変数名；
    //どのクラスを使うか明示する必要がある
//  Position iPos;　エラーが出ます
    Position<int>   iPos;   //m_PosX(Y)をint型として扱うPositionクラス
    Position<float> fPos;   //m_PosY(Y)をfloat型として扱うPositionクラス
    return 0;
}
