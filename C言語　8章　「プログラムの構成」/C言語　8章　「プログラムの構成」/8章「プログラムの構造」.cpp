#include<stdio.h>

#define LOOPNUM 3 //���̍s�ȍ~�ɏo�Ă���LOOPNUM�Ƃ����L�q��3�ɒu�������܂��B ;���s�v;
#define HIKU(x,y) ((x)-(y)) //���̍s�ȍ~�ɏo�Ă���HIKU(x,y)�́@((x)-(y))�ɒu�������B����������t���}�N��
//�u�������̍ہA()���Ȃ��ƈӐ}�����v�Z���ʂɂȂ�Ȃ��̂ŁA�u���s���鏈���S�̂Ƃ��̒��̈����́u�v�ň݂͂܂��v

#define JIJYO(x) ((x)*(x)) //������2����v�Z����}�N�����v�Z.

int main() {
	//int i;
	//for (i = 0; i < LOOPNUM; i++) {//LOOPCOUNT��3����
	//	printf("LoopCount:%d\n", i + 1);
	//}

	printf("�}�N���̎��s����:%d\n", HIKU(5, 3));

	int i = 1;
	while (i <= 5) {
		printf("����:%d\n", JIJYO(i++));
	}

}
//void increment() {
//	int a = 0; //���ʂɐ錾����a�͊֐��Ăяo�����ɔj������Ă����B
//	static int b = 0; //static�錾����b�̓v���O�����I���܂ő������Ă����B
//	const int c = 0; //const�l�͒l��ύX���悤�Ƃ���ƃG���[���N����B
//	a++;
//	b++;
//	printf("a:%d,b:%d\n", a, b);
//
//
//}



