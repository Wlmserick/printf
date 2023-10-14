#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * structure - link exact specifics for printf
 * @wlms: where the link character points to
 * @e: pionetr example
 */

typedef struct format
{
	char *wlms;
	int (*e)();
} convert_to;

int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list asre);
int printf_bin(va_list val);
int printf_srev(va_list asre);
int printf_rot13(va_list asre);
int printf_int(va_list asre);
int printf_dec(va_list asre);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
