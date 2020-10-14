
#include<stdio.h>
#include<stdlib.h>
#include <iostream>　　//stringを扱うためのヘッター
#include<string>　		//C++で拡張された入出力用のヘッター

int main()
{
	char word = 'a';					//一文字
	char nama[] = "saitou hiroaki";		//文字配列
	const char* cstr = "Hello World!";	//const char ポインタ型

	//上記の文字・列をprintfで描画する
	printf("%c\n", word);
	printf("%s\n", nama);
	printf("%s\n", cstr);

	//string型書き方(初期化方法色々)
//	std::string str = "文字列";					//勝手に終端文字(\n)も含め配列を用意してくれる
	//std::string str;			//""(空っぽ)
	//std::string str = "";		//""(空っぽ)
	//std::string str = "ABC";	//"ABC"
	//std::string str("ABC");	//"ABC"
	std::string str2(3,'A');	//"AAA"
	std::string str = str2;		//"ABC"

	//C言語の関数でstring型に入力されている文字列を使うには.c_str()という関数で、
	//文字列のポインタをとる必要がある
	//printf("%s\n", str.c_str());

	//C++的な書き方(iostreamとstringのインクルードが必要)
	std::cout << str << std::endl;

	//文字サイズを取得.size()or .length()
	std::cout << "str size = " << str.size() << std::endl;

	//文字の挿入　+=, .push_back(), .append(), .insert()
	str += "BBC";				//"AAABBC" 末尾に文字列を追加
	str.push_back('D');			//"AAABBCD" 末尾に1文字を追加
	str.append("EE");			//"AAABBCDEE"末尾に文字列を追加
	str.insert(1,"FG");			//"AFGAABBCDEE"指定の場所に、文字列を追加
	std::cout << str << std::endl;

	str = "ABC ABC";
	int index = str.find('C');	//2 先頭から１文字を探す
	index = str.find('BC');		//１先頭から文字列を探す
	index = str.find("BC", 2);	//5指定の位置(2)から文字列を探す
	index = str.find("Z");		//-1だがstd::string::nposを使って判断する
	
	//文字の置き換え .replace(何文字目、何文字分、置き換え文字列)
	std::string from = "BC";
	std::string to = "X";
	str.replace(str.find(from), from.size(), to);	//"AX ABC"
	std::cout << str << std::endl;

	//文字の削除 .clear()
	str.clear();
	std::cout << str << std::endl;

	system("pause");
	return 0;
}
