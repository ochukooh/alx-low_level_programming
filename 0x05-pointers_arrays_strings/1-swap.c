#include "main.h"
/**
 * swap_int - swap no.
 * @a,: int 1
 * @b: int 2
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *b;
	*b = *a;
	*a = s;
}
