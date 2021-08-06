#include <stdio.h>

int main(void)
{
	int water;
	water = 198;

	int milk;
	//“ñ–{”ƒ‚¤
	milk = 138;

	int money;
	money = 1000;

	double tax;
	tax = 1.05;

	int total = (int) ((water + milk * 2) * tax);
	int change = money - total;

	printf("%d\n", change);

	return 0;
}
