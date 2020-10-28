
#include <iostream>

//後置const関数 = コンストメンバ関数
//戻り値　関数名(引数)const
class Test
{
public:
	void SetValue(int value);
	int GetValue()const;

private:
	int Value;
};

void Test::SetValue(int value)
{
	Value = value;
}

//コンストメンバ変数の定義(定義)部分にも後置constをつける
int Test::GetValue()const
{
	return Value;
	//注：コンストメンバ関数の中では、メンバ変数に対する値の代入を行うことができない
	//　　コンストメンバ関数を呼び出す際、内部のメンバ変数への代入操作を行わないことが証明される
	//Value = 100;

	//注：コンストメンバ関数以外の関数を呼び出すこともできない
	//SetValue(100);
}

int main()
{
	Test test;
	test.SetValue(1000);
	int ans = test.GetValue();

	const Test* pTest = &test;
	//pTest->SetValue(10);	//コンストメンバ関数ではないため、使用できない(変更される恐れあり)
	pTest->GetValue();		//コンストメンバ関数なので、使用できる

	return 0;
}
/*
　「Get○○」とか「bool Is○○」と名付けるものは
 　コンストメンバ関数にするのを推奨する
*/