#include "main.h"
/**
 * factorial - function
 * @n: - variable
 * Return: void
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
