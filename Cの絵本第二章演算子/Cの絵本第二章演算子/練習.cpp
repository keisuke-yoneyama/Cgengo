#include <stdio.h>

int main()
{
	printf("5+5は%dです。\n", 5 + 5);
	printf("5-5は%dです。\n", 5 - 5);
	printf("5*5は%dです。\n", 5 * 5);
	printf("5÷5は%dです。\n", 5 / 5);
	printf("5÷3のあまりは%dです。\n-----------------------------------------\n", 5 % 3);

	/*int a = 2;
	printf("はじめは%dでした。\n", a);

	a++;
	printf("1増えて%dになりました。\n", a);

	a--;
	printf("1減って%dに戻りました。\n", a);

	int b = 1, c = 1;

	printf("bは１、cは１です\n");
	printf("前置だとbは%dになります。\n", ++b);
	printf("後置だとcは%dのままです。\n------------------------------------------\n", c++);*/

	/*int a = 10, b = 20;

	printf("a=%d b=%d\n", a, b);
	printf("a<b ・・・%d\n", a < b);
	printf("a>b ・・・%d\n", a > b);
	printf("a==b ・・・%d\n", a == b);
	printf("a=b ・・・%d\n", (a = b));*/

	//ーーーーーーーーーーーーーーーーーーーーーーーーー
		/*
		%d は10進数で表示
		%x は16進数で表示
		ーーーーーーーーーーーーーーーーーーーーーーー
*/
//	int a = 30, x;

//x = (0 <= a && a <= 100) ? a : 0; // 真のとき左、偽の時は右の項が代入される
//printf("%d\n", x);

	int a = 15;     //10進数の15
	int b = 0x11;   //0x は16進数

	printf("10進数の%dは16進数では%X\n", a, a);//%xを大文字にすると16進数のA～Fの文字が大文字になる。
	printf("16進数の%xは16進数では%d\n", b, b);

	char c = 1;
	char s[10] = "Hello";

	printf("long型 = %dバイト\n", sizeof(long)); //sizeofでバイト数を表示
	printf("char型変数 = %dバイト\n", sizeof(c));
	printf("文字列変数 = %dバイト\n", sizeof(s));

	printf("3÷2= %f \n", 3 / (float)2); /*floatをキャスト*/

	printf("2×8-6÷2 = %d\n", 2 * 8 - 6 / 2);
	printf("2×(8-6)÷2 = %d\n", 2 * (8 - 6) / 2);
	printf("1-2+3 = %d\n", 1 - 2 + 3);
	printf("1-(2+3) = %d\n", 1 - (2 + 3));
}