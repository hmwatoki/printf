Custom Printf
Custom Printf is a C program that enables users to print formatted output to the console, offering more flexibility and customization options than the standard printf function.

About
This project was developed as part of the ALX SE bootcamp by Harrison Mwatoki and Imane Ouiyzme. Our goal was to create a reliable and efficient alternative to the standard printf function that allows for more customization options.

Usage
To use Custom Printf, include the header file "main.h" in your C program and call the function _printf with the desired format string and arguments. Here's an example:

#include "main.h"

int main(void) {
    char *name = "Jane Doe";
    int age = 30;
    _printf("Hello, my name is %s and I am %d years old\n", name, age);
    return (0);
}
Output:
Hello, my name is Jane Doe and I am 30 years old
Supported Conversion Specifiers

Custom Printf supports the following conversion specifiers:

*%c - prints a single character
*%s - prints a null-terminated string
*%d - prints a signed integer in base 10
*%i - prints a signed integer in base 10
*%b - prints an unsigned integer in binary
*%u - prints an unsigned integer in base 10
*%o - prints an unsigned integer in octal
*%x - prints an unsigned integer in hexadecimal (lowercase)
*%X - prints an unsigned integer in hexadecimal (uppercase)
*%% - prints a single % character
Return Value
The _printf function returns the number of characters printed (excluding the null byte used to end output to strings). If an error occurs, it returns a negative value.
