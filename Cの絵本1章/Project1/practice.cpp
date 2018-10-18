#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d-%dは%dです。\n", 3, 2, 3 - 2);

	/* %d…整数を10進数で表示する
	 %f…実数を表示する (少数点のついている数) を表示する floatは そのまま表示!
	   %c…文字を表示する 半角文字1個分 ←はシングルコーテーション! ' '
	   %s…文字列を表示する　A　ABC　あ　など
	*/
	printf("---------------------------------\n\n");

	printf("%s %c %f \n", "6÷5", '=', 1.2);

	printf("--------------------------------------\n\n");


	unsigned char age = 25; //整数値
	double height = 166.7; //実数地
	float weight = 58.5; //実数値

	printf("年齢:%d歳\n", age); //ageの中身は10進数の数字だから入れてOK
	printf("身長:%fcm\n", height);
	printf("体重:%fキログラム\n", weight);
	printf("----------------------------------------\n");

	/* %d…  整数を10進数で表示する
	   %f…  実数を表示する (少数点のついている数) を表示する floatは そのまま表示!
	   %c…  文字を表示する 半角文字1個分 ←はシングルコーテーション! ' '
	   %s…  文字列を表示する　A　ABC　あ　など

	   char は　 %cとにてる的な？
	*/

	char a = 'A'; //まずchar の型定義。 char でいう 1文字'A' は　文字ナンバー　６５と同等　
	printf("%d\n", a);
	printf("%c\n-----------------------\n", a);

	char b = 65;
	printf("%d\n", b);
	printf("%c\n", b);

	char s[10] = "Hello"; //s[]で10文字分を用意します。
	printf("%s\n", s);
	strcpy_s(s, "Good bye"); //strcpy_sでエラーが消える
	printf("%s\n", s);

	/*
	\0 = NULL文字
	\b = バックスペース
	\t = tab
	\n = 改行
	\r =  復帰
	\\ = \
	\' = '
	\" = "
	*/

	printf("     %8s     %8s\n", "商品A", "商品B");
	printf("数量%08d %08d\n", 16, 246);
	printf("重量%8.4f %8.4f\n", 76.3, 556.1);//ここまで表形式
	printf("%d%c", 20, 10);//%cでコード10は改行
	printf("%d\bA\n", 20); //\bは改行
	printf("%d\t%d\n", 20, 30);//\tはタブ

}