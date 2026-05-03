#include <unistd.h>
#include "libft.h"

char *ft_strncat(char* dest, char* c, int n)
{
	int i;
	int k;
	i = ft_strlen(dest);
	k = 0;
	while(k < n)
	{
		if(c[k] == '\0')
		{
		dest[i] = c[k];
		break;
		}
		else
		{
		dest[i] = c[k];
		i++;
		k++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

