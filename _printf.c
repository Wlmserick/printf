#include "main.h"
/**
 * _printf - picks function that is printed out.
 * @format: identifies the format needed.
 * Return: outputs the needed result.
 */
int _printf(const char * const format, ...)
{
	convert_to c[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list asre;
	int a = 0, b, length = 0;

	va_start(asre, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (c[b].wlms[0] == format[a] && c[b].wlms[1] == format[a + 1])
			{
				length += c[b].e(asre);
				a = a + 2;
				goto Here;
			}
			b--;
		}
		_putchar(format[a]);
		length++;
		a++;
	}
	va_end(asre);
	return (length);
}
