#include "holberton.h"
/**
* print_array -change value using the pointer address
*
*@a: stores the input
*@n: stores the input
*/
void print_array(int *a, int n)
{
int i; 
for(i=0;i<n;i++)
{
printf("%d,  ", a[i]);
}
return 0;
} 
