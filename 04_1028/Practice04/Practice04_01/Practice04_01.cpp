
#include <iostream>
#include"test.h"

int main()
{
    Test testA;
    Test testB;

    testA.SetValue(10);
    testA.SetStaticValue(1945);
    testB.SetValue(324);

    //staticメンバ変数は以下のように書くこともできる
    Test::SetStaticValue(1000);

    testA.PrintValue();
    testB.PrintValue();

    //staticメンバ関数・変数の使い方１例(実体の数を数える)
    Test::printCount();//ブロック｛｝は単体で運用できる
    {
        Test testC;
        Test::printCount();
    }
    Test::printCount();

    return 0;
}

