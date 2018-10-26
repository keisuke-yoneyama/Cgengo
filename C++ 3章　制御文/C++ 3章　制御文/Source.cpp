#include<stdio.h>

int main()
{
	/*int a = 5;

	if (a % 2 == 0)
		printf("%d は偶数です。\n", a);
	else
		printf("%dは奇数です。\n", a);*/

		/*int s = 65;

		printf("あなたの点数は%d点です。\n", s);

		if (s < 70) {
			printf("平均まであと%d点。\n", 70 - s);
			printf("かんばりましょう！\n");
		}
		else {
			printf("よくできました！");
		}

		char c = '#';

		printf("%c は", c);

		if ('0' <= c && c <= '9')
			printf("数字です.\n");
		else if ('a' <= c && c <= 'z')
			printf("小文字です。\n");
		else if ('A' <= c && c <= 'z')
			printf("大文字です。\n");
		else
			printf("記号です。\n");*/

			/*int a = 90;

			if (a > 80)
			{
				if (a == 100) {
					printf("満点です。\n");
				}
				else {
					printf("もう少しです。\n");
				}
			}
			else {
				printf("頑張りましょう。\n");
			}*/

			/*int i, j;*/

			//for (j = 1; j <= 9; j++) { //九九の二十処理。繰り返す回数が決まっているときはFOR文
			//	for (i = 1; i <= 9; i++) {
			//		printf("%d×%d=%d\n", j, i, j*i);
			//	}
			//}

			//char a;
			//do {
			//	a = getchar();//getcharはキーボードから入力された半角文字1つを得ます
			//	printf("%c", a);
			//} while (a != 'e');//eが入力されるまで

			/*char a;

			printf("1～3で好きな数字を入力してください。\n");

			a = getchar();

			switch (a) {
			case '1':
				printf("中吉\n");
				break;

			case'2':
				printf("大吉\n");
				break;

			case '3':
				printf("小吉\n");
				break;
			default:
				printf("入力が間違っています\n");
			}*/

			//ワードカウンターを作成する

			//char c = '\0'; //  キーボードから入力した1文字
			//char prevletter;
			//prevletter = '\0';//以前の文字を取っておく
			//int wordnum; //単語数
			//int word_in; //単語に入っていればtrue

			//while (1) {
			//	wordnum = 0;
			//	word_in = 0;
			//	prevletter = '\0';
			//	printf("文字列を入力してください:");
			//	while (1) {
			//		c = getchar();
			//		if (c == '\n')
			//		{
			//			if (word_in)
			//				wordnum++;
			//			break;//エンターキーの時は内側のループを抜けます。
			//		}
			//		prevletter = c;
			//		if (c == ' ' || c == '.')
			//		{
			//			if (word_in) {
			//				wordnum++;
			//				word_in = 0;
			//			}

			//		}
			//		else
			//			word_in = 1;
			//	}
			//	if (prevletter == '\0')//何も入力がなければ外側のループを抜けます。
			//		break;
			//	printf("ワード数:%d\n", wordnum);

			//}

			//int x, y; /*ループカウンタ*/
			//char d; /*キャラクタ番号*/

			//for (x = 2; x < 8; x++)		/*最上行の表示*/
			//	printf("16: 10:c | ");	/*16は16進、10は10進、cは文字の略*/
			//printf("\n");

			//for (x = 2; x < 8; x++)
			//	printf("----------+-"); //2行目
			//printf("\n");

			//for (y = 0; y < 16; y++) {
			//	for (x = 2; x < 8; x++) {             //1行分の表示
			//		d = x * 16 + y;
			//		printf("%2X:%3d:%c | ", d, d, d);
			//	}
			//	printf("\n");
			//}

			/*int a[4];

			int n = 1;*/

			//a[0] = 1;
			//a[1] = 2;
			//a[2] = 3;
			//a[3] = 4;
			//printf("%d\n", a[n]); //a[1]の値を表示
	/*int i;
	int a[] = { 1,2,3,4 };

	for (i = 3; i >= 0; i--) {
		printf("%d ", a[i]);
		printf("\n");
	}*/

	int i = 0;
	char a[] = "NET";
	char b[4];

	while (a[i] != '\0')//\0は最後の文字列\0になるまで繰り返し
	{
		b[i] = a[2 - i];//T→E→Nの順に代入される
		i++;
	}
	b[3] = '\0';
	printf("%sは逆から読むと%s\n", a, b); 

		  
}

