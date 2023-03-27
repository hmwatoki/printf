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
int i;
int d;
unsigned int u;
unsigned int o;
unsigned int x;
void *p;
char c, *s;
i = 0;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
c = (char)va_arg(args, int);
_putchar(c);
i++;
break;
case 's':
s = va_arg(args, char*);
while (*s)
{
_putchar(*s);
i++;
s++;
}
break;
case 'd':
case 'i':
d = va_arg(args, int);
if (d < 0)
{
_putchar('-');
i++;
d = -d;
}
i += print_number(d);
break;
case 'u':
u = va_arg(args, unsigned int);
i += print_unsigned_number(u);
break;
case 'o':
o = va_arg(args, unsigned int);
i += print_octal_number(o);
break;
case 'x':
x = va_arg(args, unsigned int);
i += print_hexadecimal_number(x, 'a');
break;
case 'X':
x = va_arg(args, unsigned int);
i += print_hexadecimal_number(x, 'A');
break;
case 'p':
p = va_arg(args, void *);
i += print_address(p);
break;
case '%':
_putchar('%');
i++;
break;
default:
_putchar('%');
_putchar(*format);
i += 2;
break;
}
}
else
{
_putchar(*format);
i++;
}
format++;
}
va_end(args);
return (i);
}

