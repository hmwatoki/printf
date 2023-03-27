#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string composed of zero or more directives
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
int i;
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c')
{
char c = (char)va_arg(args, int);
count += _putchar(c);
}
else if (format[i] == 's')
{
char *s = va_arg(args, char *);
int j;
for (j = 0; s[j] != '\0'; j++)
{
count += _putchar(s[j]);
}
}
else if (format[i] == '%')
{
count += _putchar('%');
}
else
{
count += _putchar('%');
count += _putchar(format[i]);
}
}
else
{
count += _putchar(format[i]);
}
}
va_end(args);
return (count);
}
