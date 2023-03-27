#ifndef MAIN_H
#define MAIN_H
/*
 * File: main.h
 * Auth: hmwatoki & Imane Ouiyzme
 * Description: Header file containing declarations for all functions
 *       used in printf project
 */
#include <stdio.h>
int _puts(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
void print_number(int n);
void _print_c(va_list args);
void _print_s(va_list args);
void _printi(va_list args);
void _print_p(va_list args);
#endif
