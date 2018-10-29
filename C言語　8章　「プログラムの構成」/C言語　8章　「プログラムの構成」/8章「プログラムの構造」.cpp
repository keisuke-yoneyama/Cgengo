#include<stdio.h>

#define LOOPNUM 3 //この行以降に出てくるLOOPNUMという記述を3に置き換えます。 ;も不要;
#define HIKU(x,y) ((x)-(y)) //この行以降に出てくるHIKU(x,y)は　((x)-(y))に置き換え。いわゆる引数付きマクロ
//置き換えの際、()がないと意図した計算結果にならないので、「実行する処理全体とその中の引数は「」で囲みます」

#define JIJYO(x) ((x)*(x)) //引数の2乗を計算するマクロを計算.

int main() {
	//int i;
	//for (i = 0; i < LOOPNUM; i++) {//LOOPCOUNTは3扱い
	//	printf("LoopCount:%d\n", i + 1);
	//}

	printf("マクロの実行結果:%d\n", HIKU(5, 3));

	int i = 1;
	while (i <= 5) {
		printf("結果:%d\n", JIJYO(i++));
	}

}
//void increment() {
//	int a = 0; //普通に宣言したaは関数呼び出し毎に破棄されていく。
//	static int b = 0; //static宣言したbはプログラム終了まで増加していく。
//	const int c = 0; //const値は値を変更しようとするとエラーが起こる。
//	a++;
//	b++;
//	printf("a:%d,b:%d\n", a, b);
//
//
//}



