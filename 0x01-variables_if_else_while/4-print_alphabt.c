#include <stdio.h>

/**
 * main - prints letters expect q and e
 * Return:0
 */

int main(void)
{
	int lw = 'a';

	while (lw <= 'z')
	{
		if (lw == 'q' || lw == 'e')
		{
			lw += 1;
		}
		else
		{
			putchar(lw);
			lw += 1;
		}
	}
	putchar('\n');
	return (0);
}
