#include<stdio.h>
#include<string.h>

//struct data {
//	int no;
//	char name[10];
//	int age;
//}list1[10]{
//	{1,"nagashima",39},
//{2,"yoneyama",10},
//{3,"yamada",10},
//{4,"katou",30},
//{5,"kitazima",40},
//{6,"yamada",39},
//{7,"kodama",50},
//{8,"takahashi",37},
//{9,"watanabe",29},
//{10,"enndou",43}
//};
//
//int main(){
//	int i;
//	struct data *sp = list1;//構造体配列名は要素0番となるため、&は必要ありません。
//	for (i = 0; i < 10; i++) {
//		printf("%d %s %d\n",
//			(*(sp + i)).no, (*(sp + i)).name, (*(sp + i)).age);
//	}
//
//	for (sp = list1; sp!= list1 + 10; sp++) {
//		printf("%d %s %d\n", sp->no, sp->name, sp->age);
//	}
//}

//typedef struct _PROFILE {//typedefで構造体名を変更
//	char name[40];
//	int age;
//}PROFILE;
//
//int main() {
//	PROFILE prof[2] = {
//		{"Maiko",20},
//		{"Naoki",31}
//	};
//	int i;
//	for (i = 0; i < 2; i++)
//		printf("%sさんは%d歳\n",
//			prof[i].name, prof[i].age);
//
//}

typedef struct _CALORIE {//CAROLIE構造体の定義
	char name[40];
	float value;
}CALORIE;

int calregist(CALORIE *, int);//プロトタイプ宣言 関数の宣言
float calcalc(CALORIE *, int);

int main() {
	CALORIE cal[500] = {				//データベースはmain()関数内で定義(最大500件) カロリー構造体の　カロリー配列
		{"米飯",150.0},{"中華麺",57.1},
	{"そば",133.3},{"うどん",100.0},
	{"素麺",133.3},{"食パン",250.0}
	};
	int cal_num = 6;//最初の6件は登録済み
	int mode = 0;

	printf("カロリー計算ツール\n");
	while (1) {
		printf("登録は1を、計算は2を、終了は0を入力してください。:");
		scanf_s("%d", &mode);
		if (mode == 0)
			break;//0で終了
		else if (mode == 1)
			cal_num = calregist(cal, cal_num);//1で登録メソッドを呼び出す
		else if (mode == 2)
			printf("総カロリー:%6.2fkcal\n\n", calcalc(cal, cal_num));//2でカロリー計算関数を呼び出す
	}
	return 0;
}
//-------------------------------------------
//|calregist()カロリーリストへ登録する      |calorieRegister 1の登録メソッドの概要
//|[引数] pcal -- カロリーリストへのポインタ|
//|[戻り値] 登録後のリストの要素数          |
//-------------------------------------------

int calregist(CALORIE *pcal, int num) {//int numには main()の cal_numが、 *pcalには　main()の cal[500]の[0]が引数に
	printf("食品名を入力してください:");
	scanf_s("%s", (pcal + num)->name); //("受け取った値の書式を指定",格納先を指定) ->nameに格納
	printf("その食品のカロリーを入力してください[kcal/100g]:");
	scanf_s("%f", &((pcal + num)->value));
	printf("登録しました.\n\n");
	return num + 1;//ポインタの移動
}
/*----------------------------------------
|calcalc() カロリーを計算する             |
|[引数] pcal -- カロリーリストへのポインタ|
|       num -- リストの要素数             |
|[戻り値] カロリー数                      |
-------------------------------------------*/

float calcalc(CALORIE *pcal, int num) {//カロリーを計算する関数 
	char name[40];  /*入力した食品名*/
	float gram;     /*入力したグラム数*/
	float totalcal = 0.0; /*合計カロリー*/
	int i;

	printf("--食品名一覧------------------------\n");
	for (i = 0; i < num; i++)
		printf("%s\t", (pcal + i)->name); /*構造体のnameをある分だけ繰り返し表示*/
	printf("\n---------------------------\n");

	while (1) {
		printf("食品名(endで計算) :");
		scanf_s("%s", name);//nameの[0]から順に文字列を格納 ☆配列は&はいらない
		if (strcmp(name, "end") == 0)//strcmp()…値が同じだと0を返す
			break;
		printf("グラム数 :");
		scanf_s("%f", &gram);//gramのアドレスにscanfで格納
		for (i = 0; i < num; i++) {
			if (strcmp(name, (pcal + i)->name) == 0) {
				totalcal += (pcal + i)->value * gram / 100.0;
				break;
			}
		}
	}
	return totalcal;
}

