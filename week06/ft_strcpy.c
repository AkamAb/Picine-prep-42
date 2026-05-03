#include <unistd.h>
#include "libft.h"

void ft_strcpy (char * dest, char* c)
{
	int i = 0;
	while( *(c + i) != '\0')
	{
		*(dest + i) = *(c + i);
		i++;
	}
	*(dest + i) = '\0';
}

