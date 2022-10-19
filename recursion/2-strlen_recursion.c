#include "main.h"
/**
 *  * _strlen_recursion - Write a function that returns the length of a string.
 *   *
 *    * @s: print string
 *     *
 *      *Return: len
 **/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
