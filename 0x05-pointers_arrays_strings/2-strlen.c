#include "main.h"
/**
 * _strlen - length of string
 * @s: return val
 * Return 0
 */
int _strlen(char *s)
{
	int a = 0; /*start from 0*/

	for (; *s++;)
		a++;
	return (a);
}
