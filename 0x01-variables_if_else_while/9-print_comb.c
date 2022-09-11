#include <stdio.h>

/**
 * main - prints single digits in ascending order
 * Return:0
 */

int main(void)
{
	int num = 48;
	int com = 44;

	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(com);
			putchar(32);
		}
		num += 1;
	}
	putchar('\n');
	return (0);
}
