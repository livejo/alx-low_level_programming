#include "holberton.h"
/**
* main -checks for upper case
*
* @size: return nothing
* Return: 1 for digit and 0 for else
*/
void print_triangle(int size)
{
int i;
int j;
int k;
for (i = 1; i <= size; i++)
{
for (j = 5; j >= i; j--)
{
_putschar(' ');
}
for (k=1; k<=i; k++)
{
_putschar('*');
}
_putschar('\n');
}
}