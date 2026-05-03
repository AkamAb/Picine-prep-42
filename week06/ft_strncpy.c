#include <unistd.h>
#include "libft.h"

char* ft_strncpy (char* dest, char* c, unsigned int n)
{
int i = 0;

	while (i < n && *(c + i) != '\0')
	{
		*(dest + i) = *(c + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return dest;
}
