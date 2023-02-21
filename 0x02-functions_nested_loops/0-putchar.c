#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 (pass)
 */
int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
