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
void print_number(int n);
void print_unsigned_number(unsigned int n);
void print_hex(unsigned long int num);
void print_hex_upper(unsigned long int num);
int get_printed_count(void);
/* separate functions for printing different format specifiers */
void print_c(va_list args);
void print_s(va_list args);
void print_i(va_list args);
void print_d(va_list args);
void print_p(va_list args);
void print_x(va_list args);
void print_X(va_list args);
void print_n(va_list args);

#endif
