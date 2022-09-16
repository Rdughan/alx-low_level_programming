#include "main.h"
/**
 * pint_numbers - prints 0 - 9
 *
 * Description: prints numbers with _putchar
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_pitchar('\n');
}
