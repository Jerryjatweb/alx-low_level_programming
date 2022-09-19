#include "main.h"

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str && (i == 0 || *str[i - 1]); str += 2)
	{
			_putchar(*str);
	}
	_putchar('\n');
}
