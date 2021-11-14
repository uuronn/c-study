#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;

	printf_s("’l‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢F");
	scanf_s("%d", &number);
	if (number > 100) {
		number = 100;
		printf_s("’l‚ªãŒÀ‚ğ’´‚¦‚½‚Ì‚Å100‚É‚µ‚Ü‚·");
	}

	return 0;
}
