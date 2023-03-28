#include "main.h"
/**
 * print_char - prints a single character
 *
 * @args: arguments list
 *
 * Return: void
 */
void print_char(va_list args)
{
_putchar(va_arg(args, int));
}
