#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from input to 98
 * @n: the number to begin
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n++;
		}

	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n--;
		}
	}
	printf("\n");
}
