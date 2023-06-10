#include "main.h"
/**
 * _sqrt_recursion - function
 * n: variable
 * Return: void
 */
int _sqrt_recursion(int n)
{
	int x = n;
	int y = 1;
	int epsilon = 0.00001;

	while ((x - y) > epsilon)
	{
		x = (x + y) / 2;
		y = n / 2;
	}
}
