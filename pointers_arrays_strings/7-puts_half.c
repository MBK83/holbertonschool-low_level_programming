#include "main.h"
/**
 *  * puts_half -  Winning is only half of it. Having fun is the other half
 *   *
 *    * @str: The string to be printed.
 *     *
 *      * Return: 0
 **/

void puts_half(char *str)
{
	int a = 0;
	int b = 0;
	int c;

	while (str[a++])
		b++;

	if ((b % 2) == 0)
		c = b / 2;

	else
		c = (b + 1) / 2;

	for (a = c; a < b; a++)
		_putchar(str[a]);

	_putchar('\n');
}
