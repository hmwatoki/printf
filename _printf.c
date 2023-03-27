#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_number - prints an integer using _putchar
 *
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n > 9) {
        print_number(n / 10);
    }
    _putchar(n % 10 + '0');
}
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
                    count += _puts(va_arg(args, char *));
                    break;
		case 'd':
                case 'i':
                    print_number(va_arg(args, int));
                    count++;
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
