#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - A function that prints a formatted string to stdout
 * @format: The format string to be printed
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
int count;
int i;
char *specifier = "csdi%";
void (*print_fn[])(va_list) = {_print_c, _print_s, _printi, _printi, _print_p};
va_list args;
va_start(args, format);
i = 0;
count = 0;
if (format == NULL)
{
return (-1);
}
while (*format)
{
if (*format == '%')
{
format++;
while (specifier[i])
{
if (*format == specifier[i])
{
print_fn[i](args);
count++;
break;
}
i++;
}
if (!specifier[i])
{
/* unsupported conversion specifier, ignore it */
_putchar('%');
}
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
/**
 * _print_c - prints a single character
 *
 * @args: arguments list
 *
 * Return: void
 */
void _print_c(va_list args)
{
_putchar(va_arg(args, int));
}
/**
 * _print_s - prints a string
 *
 * @args: arguments list
 *
 * Return: number of characters printed
 */
void _print_s(va_list args)
{
int count;
count = 0;
count += _puts(va_arg(args, char *));
}
/**
 * _printi - prints an integer
 *
 * @args: arguments list
 *
 * Return: void
 */
void _printi(va_list args)
{
print_number(va_arg(args, int));
}
/**
 * _print_p - prints a percent character
 *
 * @args: arguments list
 *
 * Return: void
 */
void _print_p(va_list args __attribute__((unused)))
{
_putchar('%');
}
