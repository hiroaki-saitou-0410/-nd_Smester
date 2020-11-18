
#include <iostream>
#include"Enemy.h"
#include"shot.h"
#include"File.h"

//using について
//usingはnamaspaceをスコープ内についかする機能
//書き方
//using namespace　namespace名;
using namespace Enemy; 


int main()
{
	//namespaceに所属しているデータを使う時の書き方(namespaceの外)
	//namespace::所属しているデータ
	//printf("敵の最大数 = %d\n", Enemy::Max);
	//printf("弾の最大数 = %d\n", Shot::Max);
	
	Enemy::PrintMax();
	Shot::PrintMax();

	//stdも名前空間
	std::cout << "std::も名前空間" << std::endl;

	//入れ子にしたnamespace内のデータを使う
	printf("テクスチャーの最大数　= %d\n", File::Texture::Max);
	printf("テクスチャーの最大数　= %d\n", File::Sound::Max);
	printf("テクスチャーの最大数　= %d\n", File::Max);

	//usingでEnemy名前空間を使うことにしているので
	//以下は、Enemy::PrintMax()をよびだしている
	PrintMax();
	return 0;

}
