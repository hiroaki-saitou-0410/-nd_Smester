
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/*比較演算子( ==,!=,<,>,<=,>= )のオペレーター
書き方
	戻り値の型　Vector2D operator + (const 参照引数);

	クラスオペレーターとして用意するなら
		bool Employee operator == (const Vector2D &vec) const;

	戻り値の型
		bool 比較結果はtreu,falseに

	引数
		

	呼び出し方の例

		vec1 + vec2; この時にoperator + が呼び出される

注意点
	・メンバ変数のうち【何を】比較しているのかがわかるようなクラス構成しておく
	今回のように、m_Post,m_Salaryはどちらも比較対象になりうるため、
	emp1 > emp2としたときに、m_Postで比較しているのか、m_Salaryで比較しているのかわかりにくい
	・比較しうる変数を１つだけに絞る、コメント*/

class Employee
{
public:
	enum POST
	{
		STAFF,			//社員
		SEVTION_CHIEF,	//課長
		MANAGER,		//部長
		PRESIDENT,		//社長
	};

	Employee(POST post_);

	void ShowPost();
	POST GetPost() const;

	//
	bool operator > (const Employee& emp_)const;

private:
	POST m_Post;	//役職
	int m_Salary;	//給料
};

#endif // !EMPLOYEE_H
