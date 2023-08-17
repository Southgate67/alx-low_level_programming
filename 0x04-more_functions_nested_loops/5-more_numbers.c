#include "main.h"

/**
 *more_numbers - print 0 t 14 10 times
 * Description: print given numbers 10 times
 * Return: void
 */
void more_numbers(void)
{
	int j;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (j = '0'; j < '15'; j++)
			_putchar(j);
				_putchar('\n');
	}
}
