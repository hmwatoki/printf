#include "main.h"
/**
 * print_integer - prints an integer
 *
 * @args: arguments list
 *
 * Return: void
 */
void print_integer(va_list args)
{
int num = va_arg(args, int);
print_number(num);
}
