#include "main.h"
#include <stdarg.h>

/**
 * _printf - custom printf
 * @format: character string
 * @...: arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 's')
{
const char *str = va_arg(args, const char *);
while (*str != '\0')
{
putchar(*str);
count++;
str++;
}
}
else if (*format == 'c')
{
char c = (char) va_arg(args, int);
putchar(c);
count++;
}
else if (*format == '%')
{
putchar('%');
count++;
}
}
else
{
putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
