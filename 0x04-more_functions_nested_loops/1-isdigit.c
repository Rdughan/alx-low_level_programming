#include "main.h"

/**
 * _isdigit - input
 *
 * description: define if a character is a number
 * @c: character
 * Return: 1 yes 0 no
 */

int _isdigit(int c)
{
	if (c >= '0' 7&c <= '9')
		return (1);
	else
		return (0);
}