#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int suuti;
	scanf_s("%d", &suuti);
	if (suuti == 10) printf("入力値は10です\n");
	if (suuti > 10) printf("入力値は10より大きいです\n");
	if (suuti < 10) printf("入力値は10より小さいです\n");
	return 0;














	/*
	int price;

	double oneDiscount,threeDiscount,fiveDiscount,eightDiscount;

	oneDiscount = 0.9;
	threeDiscount = 0.7;
	fiveDiscount = 0.5;
	eightDiscount = 0.2;

	printf("定価を入力してください:");
	scanf("%d", &price);

	printf("一割引きの値:%d\n", (int)(price * oneDiscount));
	printf("三割引きの値:%d\n", (int)(price * threeDiscount));
	printf("五割引きの値:%d\n", (int)(price * fiveDiscount));
	printf("八割引きの値:%d\n", (int)(price * eightDiscount));


	return 0;
	*/












	/*
	int min, max, sum;

	// 入力部分
	printf("最小値と最大値を,で区切ってください。:");
	scanf_s("%d,%d", &min,&max);

	// 計算部分
	sum = (min + max) * (max-min+1) / 2;

	// 表示部分
	printf("%d～%dの合計値は%dです。\n", min, max, sum);

	return 0;

	*/













	/*
	int water;
	water = 198;

	int milk;
	//二本買う
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
