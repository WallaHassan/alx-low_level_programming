
#include "main.h"




/**


 * 0-memset.o


 *


 * Return: change array with new value for n bytes


 */


char *_memset(char *s, char b, unsigned int n)


{


   	int a = 0;


 


   	for (; n > 0; a++)


   	{


          	s[a] = b;


          	n--;


   	}


   	return (s);


}


