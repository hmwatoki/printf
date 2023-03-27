#ifndef MAIN_H
#define MAIN_H
/*
 * File: main.h
 * Auth: hmwatoki & Imane Ouiyzme
 * Description: Header file containing declarations for all functions
 *       used in printf project
 */
#include <stdio.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
int print_unsigned_number(unsigned int n);
int print_octal_number(unsigned int n);
int print_hexadecimal_number(unsigned int n, char cs);
int print_address(void *p);
#endif
