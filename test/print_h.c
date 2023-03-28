#include "main.h"
/**
 * print_x - prints a hexadecimal integer (lowercase)
 *
 * @args: arguments list
 *
 * Return: void
 */
void print_x(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
print_hex(num);
}
