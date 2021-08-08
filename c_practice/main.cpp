#include <stdio.h>

int main(void)
{
	int min,max,sum;

	// 入力部分
	printf("最小値と最大値を,で区切ってください。:");
	scanf_s("%d,%d", &min,&max);

	// 計算部分
	sum = (min + max) * (max-min+1) / 2;

	// 表示部分
	printf("%d～%dの合計値は%dです。\n", min, max, sum);

	return 0;


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
