#include <stdio.h>

/**
 * main - prints different digits
 * prints from smallest
 * putchar should be used without char
 * Return:0
 */

int main(void)
{
	int num1 = 48;
	int num2 = 49;
	int com = 44;

	while (num1 <= 56)
	{
		num2 = 49;
		while (num2 <= 57)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56 || num2 != 57)
			{
				putchar(com);
				putchar(32);
			}
			num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');
	return (0);
}
