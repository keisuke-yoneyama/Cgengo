#include<stdio.h>
#include<string.h>
#include<memory.h>//���I�ȃ��������m�ۂ���Ƃ��ɕK�v
#include<malloc.h>
#include<stdlib.h>

int main() {
	//char s1[] = "cat", s2[] = "dog";
	//char s[20];
	//sprintf_s(s, "I love %s and %s.", s1, s2);
	//printf("�u%s�v�̕�������%d\n", s, strlen(s));

	//int x, y;
	//int a[2][3] = {
	//	{10,20,30},
	//	{40,50,60}
	//};
	//for (y = 0; y < 2; y++) {//�z��I�ɂ�0�C1�̈ʒu
	//	for (x = 0; x < 3; x++)//�z��I�ɂ�0,1,2�̈ʒu
	//		printf("a[%d][%d] = %d ", y, x, a[y][x]);
	//	printf("\n");
	//}

	//char a;
	//short b;
	//// �ϐ��̓��Ɂ�������ƃA�h���X��\��
	//printf("a�̃A�h���X�� %x,b�̃A�h���X��%x \n", &a, &b);

	//char x = 4;
	//char y;
	//char *p = &x; //�|�C���^P�ɂ��̃A�h���X����
	//y = *p; //�|�C���^�̎w���Ă���l��y�ɑ������
	//printf("�ϐ�x�̒l��%d�ł�\n", y);

	//char s[] = "I love deathNote";
	//char c = 'd';
	//char *p = NULL;

	//printf("������ �u%s�v�̒��ɕ����u%c�v", s, c);
	//p = strchr(s, c);//s�̕������c(d)������΃|�C���^��Ԃ��B���݂��Ȃ��ꍇ��null��Ԃ��B
	//if (!p) {
	//	printf("�͂���܂���B\n");
	//}
	//else {
	//	printf("�𔭌����܂����B\n");
	//}

	//int a[4] = { 10,20,30,40 }; /*�z��̖��O���̂��͔̂z��̍ŏ��̏ꏊ���w���@a[0]*/
	//printf("�z��a[3]�̒l��%d\n", *(a + 3));
	//printf("�z��a[0]�̒l��3�𑫂���%d\n", *a + 3);

	//char *b; 
	//char a[4] = { 20,40,30,10 };
	//b = (char *)malloc(sizeof(char) * 200); //�}���b�N�֐��Ń��������m��
	//if (!b) 
	//	return NULL; //�m�ۂł��Ȃ������ꍇ�͉����������Ȃ��ŕԂ��B
	//
	//	memcpy(b, a, sizeof(char) * 4);//sizeof(char)��1�o�C�g���i��  �}���R�s�[(b��a�̔z���4�o�C�g���R�s�[����
	//	printf("%d %d %d %d\n", b[0], b[1], b[2], b[3]);
	//	free(b);//�m�ۂ��������������

	//char s[] = "I love cat and dog."; //�T���Ώۂ̕�����
	//char c = 'a'; //�T������
	//char *p = s; //�z��s�Ƀ|�C���^����������
	//int n = 0;//�������������J�E���g����ϐ�

	//printf("\"%s\"�̒�����\'%c\'��T���܂��B\n", s, c); //%c��1�����@%s�͕�����
	//while (*p != '\0') {
	//	if (*p == c) {//�z��s�̒���c����������
	//		printf("%d�����ڂŔ������܂����B\n", p - s + 1);//�z��
	//		n++;
	//	}
	//	p++;
	//}
	//if (n == 0) {
	//	printf("1��������܂���ł����B\n");
	//}
	//else {
	//	printf("�S����%d������܂����B\n", n);
	//}

	int mat[3][4] = {
		{20,42,70,34},
		{67,98,37,41},
		{76,99,43,65}
	};
	int i, j;
	int sum_r; /*���̗�̘a*/
	int sum_c[4] = { 0,0,0,0 };/*�c�̊e��̘a*/
	int total = 0; /*�S�Ă̐��̍��v*/

	/*�e�v�f�̕\���ƌv�Z*/
	for (j = 0; j < 3; j++) {
		sum_r = 0;
		for (i = 0; i < 4; i++) {
			printf("%4d ", mat[j][i]);
			sum_r += mat[j][i];
			sum_c[i] += mat[j][i];
		}
		printf("| %4d\n", sum_r);
	}

	/*�d�؂���ƍŌ�̍s�̕\��*/
	printf("--------------------+----------\n");
	for (i = 0; i < 4; i++) {
		printf(" %4d", sum_c[i]);//[0]��ڂ̑����l��\��
		total += sum_c[i];//�c�̘a����
	}
	printf("| %4d\n", total);/*�J��Ԃ�����g�[�^����\��*/
}
