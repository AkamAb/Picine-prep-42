#include <unistd.h>
#include "libft.h"

char *ft_strlowcase (char* c)
{
	int i;
	i = 0;
	while ( *(c + i) != '\0')*
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
		{
			c[i] = c[i] + 32;
		}
		i++
	}
	return (c);
}
