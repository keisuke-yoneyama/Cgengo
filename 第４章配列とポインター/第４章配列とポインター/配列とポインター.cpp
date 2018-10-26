#include<stdio.h>
#include<string.h>
#include<memory.h>//動的なメモリを確保するときに必要
#include<malloc.h>
#include<stdlib.h>

int main() {
	//char s1[] = "cat", s2[] = "dog";
	//char s[20];
	//sprintf_s(s, "I love %s and %s.", s1, s2);
	//printf("「%s」の文字数は%d\n", s, strlen(s));

	//int x, y;
	//int a[2][3] = {
	//	{10,20,30},
	//	{40,50,60}
	//};
	//for (y = 0; y < 2; y++) {//配列的には0，1の位置
	//	for (x = 0; x < 3; x++)//配列的には0,1,2の位置
	//		printf("a[%d][%d] = %d ", y, x, a[y][x]);
	//	printf("\n");
	//}

	//char a;
	//short b;
	//// 変数の頭に＆をつけるとアドレスを表す
	//printf("aのアドレスは %x,bのアドレスは%x \n", &a, &b);

	//char x = 4;
	//char y;
	//char *p = &x; //ポインタPにｘのアドレスを代入
	//y = *p; //ポインタの指している値をyに代入する
	//printf("変数xの値は%dです\n", y);

	//char s[] = "I love deathNote";
	//char c = 'd';
	//char *p = NULL;

	//printf("文字列 「%s」の中に文字「%c」", s, c);
	//p = strchr(s, c);//sの文字列にc(d)があればポインタを返す。存在しない場合はnullを返す。
	//if (!p) {
	//	printf("はありません。\n");
	//}
	//else {
	//	printf("を発見しました。\n");
	//}

	//int a[4] = { 10,20,30,40 }; /*配列の名前そのものは配列の最初の場所を指す　a[0]*/
	//printf("配列a[3]の値は%d\n", *(a + 3));
	//printf("配列a[0]の値に3を足すと%d\n", *a + 3);

	//char *b; 
	//char a[4] = { 20,40,30,10 };
	//b = (char *)malloc(sizeof(char) * 200); //マロック関数でメモリを確保
	//if (!b) 
	//	return NULL; //確保できなかった場合は何も処理しないで返す。
	//
	//	memcpy(b, a, sizeof(char) * 4);//sizeof(char)は1バイトずつ進む  マムコピー(bにaの配列の4バイト分コピーする
	//	printf("%d %d %d %d\n", b[0], b[1], b[2], b[3]);
	//	free(b);//確保したメモリを解放

	//char s[] = "I love cat and dog."; //探す対象の文字列
	//char c = 'a'; //探す文字
	//char *p = s; //配列sにポインタｐを向ける
	//int n = 0;//見つかった個数をカウントする変数

	//printf("\"%s\"の中から\'%c\'を探します。\n", s, c); //%cは1文字　%sは文字列
	//while (*p != '\0') {
	//	if (*p == c) {//配列sの中にcがあったら
	//		printf("%d文字目で発見しました。\n", p - s + 1);//配列
	//		n++;
	//	}
	//	p++;
	//}
	//if (n == 0) {
	//	printf("1つも見つかりませんでした。\n");
	//}
	//else {
	//	printf("全部で%d個見つかりました。\n", n);
	//}

	int mat[3][4] = {
		{20,42,70,34},
		{67,98,37,41},
		{76,99,43,65}
	};
	int i, j;
	int sum_r; /*横の列の和*/
	int sum_c[4] = { 0,0,0,0 };/*縦の各列の和*/
	int total = 0; /*全ての数の合計*/

	/*各要素の表示と計算*/
	for (j = 0; j < 3; j++) {
		sum_r = 0;
		for (i = 0; i < 4; i++) {
			printf("%4d ", mat[j][i]);
			sum_r += mat[j][i];
			sum_c[i] += mat[j][i];
		}
		printf("| %4d\n", sum_r);
	}

	/*仕切り線と最後の行の表示*/
	printf("--------------------+----------\n");
	for (i = 0; i < 4; i++) {
		printf(" %4d", sum_c[i]);//[0]列目の総合値を表示
		total += sum_c[i];//縦の和を代入
	}
	printf("| %4d\n", total);/*繰り返したらトータルを表示*/
}
