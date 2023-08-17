#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: the character to be checked
 *
 * Return: 1 if character is uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
