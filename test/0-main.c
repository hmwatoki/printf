#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program uses _printf to print a message to standard output.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count;
count = _printf("Hello, %s!\n", "world");
printf("Return value: %d\n", count);
count = _printf("%c %d\n", 'A', 10);
printf("Return value: %d\n", count);
count = _printf("%i %u\n", -10, 20);
printf("Return value: %d\n", count);
count = _printf("%% %s\n", "percent");
printf("Return value: %d\n", count);
return (0);
}
