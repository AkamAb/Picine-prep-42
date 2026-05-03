#include <unistd.h>
#include "libft.h"

char *ft_strupcase (char* c)
{
	int i;
	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	
	return (c);
}

