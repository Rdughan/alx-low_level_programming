#include "main.h"

/**
 * _isupper - define is a character is uppercase
 *
 * Description: prints the alphabet in _putchar
 * @c: character
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
