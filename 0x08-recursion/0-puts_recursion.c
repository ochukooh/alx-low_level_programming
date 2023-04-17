#include "main.h"
/**
 * _puts_recursion -> this is a function to print string recursivly
 * @s: string paramenter
 */
void puts_recursion (char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	S++;
	_puts_recursion(s);
}
