#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - A function that prints a formatted string to stdout
 * @format: The format string to be printed
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, j = 0, len = 0;
char *buf;
char *specifier = "csdi%";
void (*print_fn[])(va_list) = {_print_c, _print_s, _printi,
_printi,
_print_p
};
buf = malloc(sizeof(char) * 1024);
if (!buf)
return (-1);
va_start(args, format);
while (format && format[i])
{
if (format[i] == '%')
{
j = 0;
i++;
while (specifier[j])
{
if (format[i] == specifier[j])
{
print_fn[j](args);
break;
}
j++;
}
i++;
}
else
{
_putchar(format[i]);
len++;
i++;
}
}
va_end(args);
free(buf);
return (len);
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
