#include "holberton.h"
/**
* print_rev -change value using the pointer address
*
*@s: stores the input
*/
void print_rev(char *s)
{
    char revstr[50];
    char *rvptr = revstr;
    int i = -1;
    while(*s)
    {
     s++;
     i++;
    }
    while(i >= 0)
    {
     s--;
     *rvptr = *stptr;
     _putchar(rvptr);
     rvptr++;
     --i;
    }
    return 0;
}
