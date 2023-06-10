#include "main.h"
/**
 * _puts_recursion - function
 * @s: pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n");
		return;
	}
	_putchar("%c", *s);
	_puts_recursion(s + 1);
}

