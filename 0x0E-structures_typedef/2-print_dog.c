#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize struct
 * @d: pointer to dog
 *
 * Return: pointer to dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (dog->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s",dog->name);
if (dog->age == NULL)
printf("Age: (nil)\n");
else
printf("Age: %d",dog->age);
if (dog->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s",dog->owner);
}
