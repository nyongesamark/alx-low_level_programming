#include <stdio.h>

/**
 * main - prints three digits followed by comma
 * prints from the smallest
 * only use putchar
 * Return:0
 */

int main(void)
{
	int num1 = 48;
	int num2 = 49;
	int num3 = 50;
	int com = 44;

	while (num1 <= 55)
	{
		num2 = 49;
		while (num2 <= 56)
		{
			num3 = 50;
			while (num3 <= 57)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 != 55 || num2 != 56 || num3 != 57)
				{
					putchar(com);
					putchar(32);
				}
				num3 += 1;
			}
			num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');
	return (0);
}
