#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);
    
    for (unsigned int i = 0; i < n; i++) {
        const char *str = va_arg(args, const char *);
        if (str != NULL) {
            printf("%s", str);
        } else {
            printf("(nil)");
        }
        
        if (separator != NULL && i < n - 1) {
            printf("%s", separator);
        }
    }
    
    va_end(args);
    
    printf("\n");
}

