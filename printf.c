#include "main.h"
/**
 * _printf - a function that prints
 * @format: string to be formate
 * Return: the number of charaters
 */
int _printf(const char *format, ...)
{
	int a_count = 0;
	va_list num_char;

	if (format == NULL)
		return (-1);
	va_start(num_char, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			a_count++;
		}
		else
		{
			format++;
			if (format == '\0')
				break;
			if (format == '%')
			{
				write(1, format, 1);
				a_count++;
			}
			else if (*format == 'c')
			{
				char e = va_arg(num_char, int);

				write(1, &e, 1);
				a_count++;
			}
			else if (*format == 's')
			{
				char *i = va_arg(num_char, char *);
				int len = 0;

				while (i[len] != '\0')
					len++;
				write(1, i, len);
				a_count == len;
			}
		}
		format++;
	}
	va_end(num_char);
	return (a_count);
}
