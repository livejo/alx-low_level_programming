#include "holberton.h"
/**
* times_table - calculates time table
*  its mine damnit
*
* Time table.
*/
void times_table(void)
{
char i;
char j;
char y;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
y=i*j;
_putchar(y);
}
_putchar('\n');
}
}