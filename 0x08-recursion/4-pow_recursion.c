#include "main.h"
/**
 * _pow_recursion - function
 * x: variable
 * y: variable
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return 1.0;
	}
	else if (y > 0)
	{
		return x * _pow_recursion(x, y - 1);
	}
	else
	{
		return 1.0 / (x * _pow_recursion(x, -y - 1));
	}
}
