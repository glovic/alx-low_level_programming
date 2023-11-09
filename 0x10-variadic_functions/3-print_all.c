#include "variadic_functions.h"
#include <stdio.h>
#include <stdio.h>

void print_char(va_list arg);
void Print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @
