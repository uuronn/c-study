#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int suuti;
	scanf_s("%d", &suuti);
	if (suuti == 10) printf("���͒l��10�ł�\n");
	if (suuti > 10) printf("���͒l��10���傫���ł�\n");
	if (suuti < 10) printf("���͒l��10��菬�����ł�\n");
	return 0;














	/*
	int price;

	double oneDiscount,threeDiscount,fiveDiscount,eightDiscount;

	oneDiscount = 0.9;
	threeDiscount = 0.7;
	fiveDiscount = 0.5;
	eightDiscount = 0.2;

	printf("�艿����͂��Ă�������:");
	scanf("%d", &price);

	printf("�ꊄ�����̒l:%d\n", (int)(price * oneDiscount));
	printf("�O�������̒l:%d\n", (int)(price * threeDiscount));
	printf("�܊������̒l:%d\n", (int)(price * fiveDiscount));
	printf("���������̒l:%d\n", (int)(price * eightDiscount));


	return 0;
	*/












	/*
	int min, max, sum;

	// ���͕���
	printf("�ŏ��l�ƍő�l��,�ŋ�؂��Ă��������B:");
	scanf_s("%d,%d", &min,&max);

	// �v�Z����
	sum = (min + max) * (max-min+1) / 2;

	// �\������
	printf("%d�`%d�̍��v�l��%d�ł��B\n", min, max, sum);

	return 0;

	*/













	/*
	int water;
	water = 198;

	int milk;
	//��{����
	milk = 138;

	int money;
	money = 1000;

	double tax;
	tax = 1.05;

	int total = (int) ((water + milk * 2) * tax);
	int change = money - total;

	printf("%d\n", change);
	*/

}
