#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 * Description: print alpahebet 10 times in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (j = '0'; j < '14'; j++)
			_putchar(j);
				_putchar('\n');
	}
}
