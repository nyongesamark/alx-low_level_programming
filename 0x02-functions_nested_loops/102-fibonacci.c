#include <stdio.h>

/**
 * main - main block
 * Description:Print the first 50 fibonacci number, starting with 1 and 2.
 * Number must be comma and space separated.
 * Return: 0
 */

int main(void)
{
	int cout = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%u, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu, ", j);
		}
		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
