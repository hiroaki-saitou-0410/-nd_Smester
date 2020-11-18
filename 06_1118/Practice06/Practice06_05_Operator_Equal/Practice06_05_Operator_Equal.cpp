﻿
#include"Character.h"
#include <iostream>

int main()
{
	Character ch1;
	Character ch2 = ch1;	//実体を作る際に合わせて初期化する
	ch1 = ch2;				//コピーコンストラクタが呼び出される
	/*代入演算子のオーバーロード時の注意点
		宣言の初期化では代入演算子のオーバーロードではなく
		コピーコンストラクタが呼び出される
		※配列の宣言時の初期化でもコピーコンストラクタが呼び出されます*/

	return 0;
}
