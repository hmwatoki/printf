#include <unistd.h>
/**
 * _puts - writes a string to stdout
 * @str: the string to print
 * Return: the number of characters printed
 */
int _puts(char *str)
{
	int len = 0;

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}
