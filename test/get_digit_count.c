#include "main.h"
/**
 * get_digit_count - calculates the number of digits in an integer
 * @n: the integer to calculate the number of digits for
 *
 * Return: the number of digits in the integer
 */
int get_digit_count(int n)
{
int count = 0;
while (n != 0)
{
n /= 10;
++count;
}
return (count);
}

