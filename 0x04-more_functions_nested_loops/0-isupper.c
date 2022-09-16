#include "main.h"
/**
 * -isupper - checks if the letters are uppercase
 *  @c: input
 *  description: deffine if character is uppercase
 *
 *  Return: 1 if c is uppercase
 *  0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
