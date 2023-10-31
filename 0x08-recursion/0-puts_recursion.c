#include "main.h"
/**
 * adding main.h file in order to 
 * access the function made
 *
 * void means the function returns nothing
 *
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
