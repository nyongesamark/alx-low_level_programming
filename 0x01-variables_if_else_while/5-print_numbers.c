#include <stdio.h>

/**
 * main - prints numbers 1-9
 * Return:0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
