#include <stdio.h>

int main(void)
{
	int min,max,sum;

	// ���͕���
	printf("�ŏ��l�ƍő�l��,�ŋ�؂��Ă��������B:");
	scanf_s("%d,%d", &min,&max);

	// �v�Z����
	sum = (min + max) * (max-min+1) / 2;

	// �\������
	printf("%d�`%d�̍��v�l��%d�ł��B\n", min, max, sum);

	return 0;


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
