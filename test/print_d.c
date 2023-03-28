#include "main.h"
/**
 * print_decimal - prints a decimal integer
 *
 * @args: arguments list
 *
 * Return: void
 */
void print_decimal(va_list args)
{
int num = va_arg(args, int);
print_number(num);
}
