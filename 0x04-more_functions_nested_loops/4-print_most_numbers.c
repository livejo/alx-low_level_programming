#include "holberton.h"
/**
* print_most_numbers -checks for upper case
*
* @void: return nothing
* Return: 1 for digit and 0 for else
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar('\n');
}
