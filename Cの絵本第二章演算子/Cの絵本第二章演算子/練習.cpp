#include <stdio.h>

int main()
{
	printf("5+5��%d�ł��B\n", 5 + 5);
	printf("5-5��%d�ł��B\n", 5 - 5);
	printf("5*5��%d�ł��B\n", 5 * 5);
	printf("5��5��%d�ł��B\n", 5 / 5);
	printf("5��3�̂��܂��%d�ł��B\n-----------------------------------------\n", 5 % 3);

	/*int a = 2;
	printf("�͂��߂�%d�ł����B\n", a);

	a++;
	printf("1������%d�ɂȂ�܂����B\n", a);

	a--;
	printf("1������%d�ɖ߂�܂����B\n", a);

	int b = 1, c = 1;

	printf("b�͂P�Ac�͂P�ł�\n");
	printf("�O�u����b��%d�ɂȂ�܂��B\n", ++b);
	printf("��u����c��%d�̂܂܂ł��B\n------------------------------------------\n", c++);*/

	/*int a = 10, b = 20;

	printf("a=%d b=%d\n", a, b);
	printf("a<b �E�E�E%d\n", a < b);
	printf("a>b �E�E�E%d\n", a > b);
	printf("a==b �E�E�E%d\n", a == b);
	printf("a=b �E�E�E%d\n", (a = b));*/

	//�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[
		/*
		%d ��10�i���ŕ\��
		%x ��16�i���ŕ\��
		�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[�[
*/
//	int a = 30, x;

//x = (0 <= a && a <= 100) ? a : 0; // �^�̂Ƃ����A�U�̎��͉E�̍�����������
//printf("%d\n", x);

	int a = 15;     //10�i����15
	int b = 0x11;   //0x ��16�i��

	printf("10�i����%d��16�i���ł�%X\n", a, a);//%x��啶���ɂ����16�i����A�`F�̕������啶���ɂȂ�B
	printf("16�i����%x��16�i���ł�%d\n", b, b);

	char c = 1;
	char s[10] = "Hello";

	printf("long�^ = %d�o�C�g\n", sizeof(long)); //sizeof�Ńo�C�g����\��
	printf("char�^�ϐ� = %d�o�C�g\n", sizeof(c));
	printf("������ϐ� = %d�o�C�g\n", sizeof(s));

	printf("3��2= %f \n", 3 / (float)2); /*float���L���X�g*/

	printf("2�~8-6��2 = %d\n", 2 * 8 - 6 / 2);
	printf("2�~(8-6)��2 = %d\n", 2 * (8 - 6) / 2);
	printf("1-2+3 = %d\n", 1 - 2 + 3);
	printf("1-(2+3) = %d\n", 1 - (2 + 3));
}