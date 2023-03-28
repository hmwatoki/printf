#include "main.h"
/**
 * print_pointer - prints a pointer address
 *
 * @args: arguments list
 *
 * Return: void
 */
void print_pointer(va_list args)
{
void *ptr = va_arg(args, void *);
_putchar('0');
_putchar('x');
print_hex((unsigned long int)ptr);
}
