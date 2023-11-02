#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - cause normal process termination with a status value of 98
*
* @b: input int
*
* Return: void
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
