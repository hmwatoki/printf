#include "main.h"
/**
 * print_X - prints a hexadecimal integer (uppercase)
 *
 * @args: arguments list
 *
 * Return: void
 */
void print_X(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
print_hex_upper(num);
}
