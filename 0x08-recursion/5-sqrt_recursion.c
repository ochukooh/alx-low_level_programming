#include "main.h"
/**
 * _sqrt_recursion - function
 * n: variable
 * Return: void
 */
double sqrt_recursive(double n, double approx) {
  double next_approx = 0.5 * (approx + n / approx);
  if (next_approx == approx) {
    return approx;
  } else {
    return sqrt_recursive(n, next_approx);
  }
}
int _sqrt_recursion(int n)
{
	return sqrt_recursive(n, n / 2);
}
