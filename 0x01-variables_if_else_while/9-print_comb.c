#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
		if (j != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
