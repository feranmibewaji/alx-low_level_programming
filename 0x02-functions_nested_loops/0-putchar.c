#include "main.h"

/**
 * main - print _putchar
 * by sye
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)

	{
		_putchar(*sh);

		sh++;
	}
	_putchar('\n');

	return (0);

}
