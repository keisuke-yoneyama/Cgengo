#include<stdio.h>

int main()
{
	/*int a = 5;

	if (a % 2 == 0)
		printf("%d �͋����ł��B\n", a);
	else
		printf("%d�͊�ł��B\n", a);*/

		/*int s = 65;

		printf("���Ȃ��̓_����%d�_�ł��B\n", s);

		if (s < 70) {
			printf("���ς܂ł���%d�_�B\n", 70 - s);
			printf("����΂�܂��傤�I\n");
		}
		else {
			printf("�悭�ł��܂����I");
		}

		char c = '#';

		printf("%c ��", c);

		if ('0' <= c && c <= '9')
			printf("�����ł�.\n");
		else if ('a' <= c && c <= 'z')
			printf("�������ł��B\n");
		else if ('A' <= c && c <= 'z')
			printf("�啶���ł��B\n");
		else
			printf("�L���ł��B\n");*/

			/*int a = 90;

			if (a > 80)
			{
				if (a == 100) {
					printf("���_�ł��B\n");
				}
				else {
					printf("���������ł��B\n");
				}
			}
			else {
				printf("�撣��܂��傤�B\n");
			}*/

			/*int i, j;*/

			//for (j = 1; j <= 9; j++) { //���̓�\�����B�J��Ԃ��񐔂����܂��Ă���Ƃ���FOR��
			//	for (i = 1; i <= 9; i++) {
			//		printf("%d�~%d=%d\n", j, i, j*i);
			//	}
			//}

			//char a;
			//do {
			//	a = getchar();//getchar�̓L�[�{�[�h������͂��ꂽ���p����1�𓾂܂�
			//	printf("%c", a);
			//} while (a != 'e');//e�����͂����܂�

			/*char a;

			printf("1�`3�ōD���Ȑ�������͂��Ă��������B\n");

			a = getchar();

			switch (a) {
			case '1':
				printf("���g\n");
				break;

			case'2':
				printf("��g\n");
				break;

			case '3':
				printf("���g\n");
				break;
			default:
				printf("���͂��Ԉ���Ă��܂�\n");
			}*/

			//���[�h�J�E���^�[���쐬����

			//char c = '\0'; //  �L�[�{�[�h������͂���1����
			//char prevletter;
			//prevletter = '\0';//�ȑO�̕���������Ă���
			//int wordnum; //�P�ꐔ
			//int word_in; //�P��ɓ����Ă����true

			//while (1) {
			//	wordnum = 0;
			//	word_in = 0;
			//	prevletter = '\0';
			//	printf("���������͂��Ă�������:");
			//	while (1) {
			//		c = getchar();
			//		if (c == '\n')
			//		{
			//			if (word_in)
			//				wordnum++;
			//			break;//�G���^�[�L�[�̎��͓����̃��[�v�𔲂��܂��B
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
			//	if (prevletter == '\0')//�������͂��Ȃ���ΊO���̃��[�v�𔲂��܂��B
			//		break;
			//	printf("���[�h��:%d\n", wordnum);

			//}

			//int x, y; /*���[�v�J�E���^*/
			//char d; /*�L�����N�^�ԍ�*/

			//for (x = 2; x < 8; x++)		/*�ŏ�s�̕\��*/
			//	printf("16: 10:c | ");	/*16��16�i�A10��10�i�Ac�͕����̗�*/
			//printf("\n");

			//for (x = 2; x < 8; x++)
			//	printf("----------+-"); //2�s��
			//printf("\n");

			//for (y = 0; y < 16; y++) {
			//	for (x = 2; x < 8; x++) {             //1�s���̕\��
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
			//printf("%d\n", a[n]); //a[1]�̒l��\��
	/*int i;
	int a[] = { 1,2,3,4 };

	for (i = 3; i >= 0; i--) {
		printf("%d ", a[i]);
		printf("\n");
	}*/

	int i = 0;
	char a[] = "NET";
	char b[4];

	while (a[i] != '\0')//\0�͍Ō�̕�����\0�ɂȂ�܂ŌJ��Ԃ�
	{
		b[i] = a[2 - i];//T��E��N�̏��ɑ�������
		i++;
	}
	b[3] = '\0';
	printf("%s�͋t����ǂނ�%s\n", a, b); 

		  
}

