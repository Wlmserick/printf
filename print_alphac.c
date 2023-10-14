#include "main.h"

/**
 * _printf - produces the needed output
 * @format: format is the working str
 * Return: gives output str length
 */
int _printf(const char *format, ...)
{
	int (*acod)(va_list, flag_w *);
	const char *a;
	va_list as;
	flag_w flags = {0, 0, 0};

	register int cout = 0;

	va_start(as, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (a = format; *a; a++)
	{
		if (*a == '%')
		{
			a++;
			if (*a == '%')
			{
				cout += _putchar('%');
				continue;
			}
			while (get_flag(*a, &flags))
				a++;
			acod = get_print(*a);
			cout += (acod)
				? acod(as, &flags)
				: _printf("%%%c", *a);
		} else
			cout += _putchar(*a);
	}
	_putchar(-1);
	va_end(as);
	return (cout);
}
