#include <stdio.h>

/**
* main - Print all single digit numbers
*
* Return: 0 (pass)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
