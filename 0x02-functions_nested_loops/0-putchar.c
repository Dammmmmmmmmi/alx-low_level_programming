#include "damilola.h"

/**
 * main - prints Damilola
 *
 * Description: prints Damilola
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[10] = "Damilola";
	int i = 0;

       	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
