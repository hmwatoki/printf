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
    if (format == NULL)
    {
       return (-1);
    }

    int count = 0;
    va_list args;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            switch (*format)
            {
                case 'c':
                    _putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char *));
                    break;
                case '%':
                    _putchar('%');
                    count++;
                    break;
                default:
                    /* unsupported conversion specifier, ignore it */
                    break;
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
