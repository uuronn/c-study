#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;

	printf_s("値を入れてください：");
	scanf_s("%d", &number);
	if (number > 100) {
		number = 100;
		printf_s("値が上限を超えたので100にします");
	}

	return 0;
}
