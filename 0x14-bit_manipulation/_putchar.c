#include "main.h"
#include <unistd.h>
/**
*prints or writes the character c to stdout
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}


