
#include<stdio.h>
#include"test.h"

//staticメンバ変数の書き方(定義部)
//型名　クラス名::変数名(=初期値)
//注：staticメンバ変数は、宣言と別に実体を作っておく必要
//	　実態を作るときは、必ずcpp側に各こと
int Test::staticValue = 0;
int Test::instanceCount = 0;

Test::Test()
{
	value = 0;
	instanceCount++;
}

Test::~Test()
{
	instanceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::PrintValue()
{
	printf("value = %d\n", value);
	printf("staticValue = %d\n", staticValue);
}

//staticメンバ変数の書き方(定義部)
//戻り値::関数名(引数)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;
	//注:staticメンバ変数の中では、
	//	　staticでないメンバ変数を操作することはできない
	//value = value_;	errorが出る
}
void Test::printCount()
{
	printf("Instance Count=%d\n", instanceCount);
}