#include <stdio.h>

/**
 * main - prints numbers and letters
 * Return:0
 */

int main(void)
{
	int num = 48;
	int lw = 'a';

	while (num <= 57)
	{
		putchar(num);
		num += 1;
	}
	while (lw <= 'f')
	{
		putchar(lw);
		lw += 1;
	}
	putchar('\n');
	return (0);
}
