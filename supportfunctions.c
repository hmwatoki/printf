#include "main.h"
/**
 * print_number - print an integer
 * @n: integer to print
 * Return: number of digits printed
 */
int print_number(int n)
{
int digits = 0;
if (n < 10)
{
_putchar(n + '0');
digits = 1;
}
else
{
digits += print_number(n / 10);
_putchar((n % 10) + '0');
digits++;
}
return (digits);
}
#include "main.h"

/**
 * print_unsigned_number - print an unsigned integer
 * @n: the number to be printed
 * Return: the number of digits printed
 */
int print_unsigned_number(unsigned int n)
{
int i = 0;
if (n / 10)
i += print_unsigned_number(n / 10);
_putchar((n % 10) + '0');
return (i + 1);
}
/**
 * print_octal_number - print an unsigned integer as octal
 * @n: the number to be printed
 * Return: the number of digits printed
 */
int print_octal_number(unsigned int n)
{
int i = 0;
if (n / 8)
i += print_octal_number(n / 8);
_putchar((n % 8) + '0');
return (i + 1);
}
/**
 * print_hexadecimal_number - print an unsigned integer as hexadecimal
 * @n: the number to be printed
 * @cs: the case to be printed ('a' or 'A')
 * Return: the number of digits printed
 */
int print_hexadecimal_number(unsigned int n, char cs)
{
int i = 0;
if (n / 16)
i += print_hexadecimal_number(n / 16, cs);
if (n % 16 < 10)
_putchar((n % 16) + '0');
else
_putchar((n % 16 - 10) + cs);
return (i + 1);
}
/**
 * print_address - print a pointer address
 * @p: the pointer to be printed
 * Return: the number of digits printed
 */
int print_address(void *p)
{
unsigned long int n = (unsigned long int)p;
_putchar('0');
_putchar('x');
return (print_hexadecimal_number(n, 'a') + 2);
}
