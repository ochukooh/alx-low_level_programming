#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - variable function
 * @n: variable
 *
 * Return: something
 */
int sum_them_all(const unsigned int n, ...) {
  int sum;
  va_list args;
  va_start(args, n);
  for (unsigned int i = 0; i < n; i++) {
    int value = va_arg(args, int);
    sum += value;
  }
  va_end(args);
  return sum;
}

