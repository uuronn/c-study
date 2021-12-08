#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf_s("FizzBazz\n");
		}
		else if (i % 3 == 0) {
			printf_s("Fizz\n");
		}
		else if (i % 5 == 0) {
			printf_s("Bazz\n");
		}
		else {
			printf("%d\n", i);
		}
	}

	return 0;
}
