#include <stdio.h>

/**
 * main - prints letters in reverse mode
 * Return:0
 */

int main(void)
{
	int lw = 'z';

	while (lw >= 'a')
	{
		putchar(lw);
		lw -= 1;
	}
	putchar('\n');
	return (0);
}
