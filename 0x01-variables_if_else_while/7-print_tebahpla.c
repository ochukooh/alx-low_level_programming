#include <stdio.h>

/**
 * main - prints lowercase in reverse
 * Description: Prints lowercase alpha in reverse using putchar
 * Return: returns zero
 */


int main(void)
{
int alpha;

for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');

return (0);
}
