#include “main.h”

/**
 * more_numbers - print 0 - 14 ten times and you
 *	can only user _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int num, rows count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 140; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar(‘\n’);
	}
}
