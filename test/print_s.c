#include "main.h"
/**
 * print_string - prints a string
 *
 * @args: arguments list
 *
 * Return: number of characters printed
 */
void print_string(va_list args)
{
int count = 0;
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (str[count] != '\0')
{
_putchar(str[count]);
count++;
}
}
