#include "holberton.h"
/**
* print_times_table - prints the 9 times table
* @n: user input
*/
void print_times_table(int n)
{
int row;
int column;
int product;
if (n > 0 || n < 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = (row * column);
if (column == 0)
{
_putchar('0' + product);
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product > 9 && product < 100)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
else if (product > 99)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (product / 100));
_putchar('0' + ((product % 100) / 10));
_putchar('0' + (product % 10));
}
}
_putchar('\n');
}
}
}
