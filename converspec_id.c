#include "main.h"

/**
 * spec_id - prints the given id
 * @args: arguements that are listed
 * @spec: the characters output
 * Return: prints charaters
 */

int spec_id(va_list args, int spec)
{
	int numbers = va_arg(args, int);
	int dis = 0;
	int wlms = numbers;
	int ehe;

	if (numbers < 0)
	{
		spec += _putchar('-');
		numbers = -numbers;

		wlms = numbers;
	}

	do {
		dis++;
		wlms /= 10;
	} while (wlms != 0);

	while (dis > 0)
	{
		int saw = 1;
		int a;

		for (a = 1; a < dis; a++)
		{
			saw *= 10;
		}
		ehe = numbers / saw;
		spec += _putchar(ehe + '0');
		numbers -= ehe * saw;
		dis--;
	}
	return (spec);
}
