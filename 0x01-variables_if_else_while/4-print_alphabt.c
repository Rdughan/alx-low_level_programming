#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != 'q' && j != 'e')
			putchar(j);
	}
	putchar('\n');
	return (0);
}
