#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include "print_c.c"
#include "print_s.c"
#include "print_i.c"
#include "print_d.c"
#include "print_p.c"
#include "print_h.c"
#include "print_hu.c"
#include "print_n.c"
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
char *specifier = "csdi%p%xXn";
void (*print_fn[])(va_list) = {print_c, print_s, print_i,
print_d, print_p, print_x,
print_X, print_n};
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
if (!specifier[j] && format[i])
{
_putchar('%');
_putchar(format[i]);
len += 2;
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
 * print_hex - prints an unsigned int in hexadecimal (lowercase)
 * @num: the unsigned int to print
 *
 * Return: void
 */
void print_hex(unsigned long int num)
{
if (num / 16)
print_hex(num / 16);
_putchar((num % 16) + (num % 16 > 9 ? 'a' - 10 : '0'));
}
/**
 * print_hex_upper - prints an unsigned int in hexadecimal (uppercase)
 * @num: the unsigned int to print
 *
 * Return: void
 */
void print_hex_upper(unsigned long int num)
{
if (num / 16)
print_hex_upper(num / 16);
_putchar((num % 16) + (num % 16 > 9 ? 'A' - 10 : '0'));
}

