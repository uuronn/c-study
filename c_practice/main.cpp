#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;

	printf_s("�l�����Ă��������F");
	scanf_s("%d", &number);
	if (number > 100) {
		number = 100;
		printf_s("�l������𒴂����̂�100�ɂ��܂�");
	}

	return 0;
}
