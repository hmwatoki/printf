#include "main.h"
/**
 * _print_n - stores the number of characters printed
 *
 * @args: arguments list
 *
 * Return: void
 */
void _print_n(va_list args)
{
int *count = va_arg(args, int *);
*count += get_printed_count();
}
/**
 * get_printed_count - Returns the number of characters printed so far
 * This function returns the total number of characters printed so far.
 * Return: The number of characters printed
*/
int get_printed_count(void)
{
int printed_count = 0;
return (printed_count);
}
