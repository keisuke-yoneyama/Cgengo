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
//	struct data *sp = list1;//�\���̔z�񖼂͗v�f0�ԂƂȂ邽�߁A&�͕K�v����܂���B
//	for (i = 0; i < 10; i++) {
//		printf("%d %s %d\n",
//			(*(sp + i)).no, (*(sp + i)).name, (*(sp + i)).age);
//	}
//
//	for (sp = list1; sp!= list1 + 10; sp++) {
//		printf("%d %s %d\n", sp->no, sp->name, sp->age);
//	}
//}

//typedef struct _PROFILE {//typedef�ō\���̖���ύX
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
//		printf("%s�����%d��\n",
//			prof[i].name, prof[i].age);
//
//}

typedef struct _CALORIE {//CAROLIE�\���̂̒�`
	char name[40];
	float value;
}CALORIE;

int calregist(CALORIE *, int);//�v���g�^�C�v�錾 �֐��̐錾
float calcalc(CALORIE *, int);

int main() {
	CALORIE cal[500] = {				//�f�[�^�x�[�X��main()�֐����Œ�`(�ő�500��) �J�����[�\���̂́@�J�����[�z��
		{"�Ĕ�",150.0},{"���ؖ�",57.1},
	{"����",133.3},{"���ǂ�",100.0},
	{"�f��",133.3},{"�H�p��",250.0}
	};
	int cal_num = 6;//�ŏ���6���͓o�^�ς�
	int mode = 0;

	printf("�J�����[�v�Z�c�[��\n");
	while (1) {
		printf("�o�^��1���A�v�Z��2���A�I����0����͂��Ă��������B:");
		scanf_s("%d", &mode);
		if (mode == 0)
			break;//0�ŏI��
		else if (mode == 1)
			cal_num = calregist(cal, cal_num);//1�œo�^���\�b�h���Ăяo��
		else if (mode == 2)
			printf("���J�����[:%6.2fkcal\n\n", calcalc(cal, cal_num));//2�ŃJ�����[�v�Z�֐����Ăяo��
	}
	return 0;
}
//-------------------------------------------
//|calregist()�J�����[���X�g�֓o�^����      |calorieRegister 1�̓o�^���\�b�h�̊T�v
//|[����] pcal -- �J�����[���X�g�ւ̃|�C���^|
//|[�߂�l] �o�^��̃��X�g�̗v�f��          |
//-------------------------------------------

int calregist(CALORIE *pcal, int num) {//int num�ɂ� main()�� cal_num���A *pcal�ɂ́@main()�� cal[500]��[0]��������
	printf("�H�i������͂��Ă�������:");
	scanf_s("%s", (pcal + num)->name); //("�󂯎�����l�̏������w��",�i�[����w��) ->name�Ɋi�[
	printf("���̐H�i�̃J�����[����͂��Ă�������[kcal/100g]:");
	scanf_s("%f", &((pcal + num)->value));
	printf("�o�^���܂���.\n\n");
	return num + 1;//�|�C���^�̈ړ�
}
/*----------------------------------------
|calcalc() �J�����[���v�Z����             |
|[����] pcal -- �J�����[���X�g�ւ̃|�C���^|
|       num -- ���X�g�̗v�f��             |
|[�߂�l] �J�����[��                      |
-------------------------------------------*/

float calcalc(CALORIE *pcal, int num) {//�J�����[���v�Z����֐� 
	char name[40];  /*���͂����H�i��*/
	float gram;     /*���͂����O������*/
	float totalcal = 0.0; /*���v�J�����[*/
	int i;

	printf("--�H�i���ꗗ------------------------\n");
	for (i = 0; i < num; i++)
		printf("%s\t", (pcal + i)->name); /*�\���̂�name�����镪�����J��Ԃ��\��*/
	printf("\n---------------------------\n");

	while (1) {
		printf("�H�i��(end�Ōv�Z) :");
		scanf_s("%s", name);//name��[0]���珇�ɕ�������i�[ ���z���&�͂���Ȃ�
		if (strcmp(name, "end") == 0)//strcmp()�c�l����������0��Ԃ�
			break;
		printf("�O������ :");
		scanf_s("%f", &gram);//gram�̃A�h���X��scanf�Ŋi�[
		for (i = 0; i < num; i++) {
			if (strcmp(name, (pcal + i)->name) == 0) {
				totalcal += (pcal + i)->value * gram / 100.0;
				break;
			}
		}
	}
	return totalcal;
}

