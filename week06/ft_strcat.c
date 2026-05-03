#include <unistd.h>
#include "libft.h"

char *ft_strcat(char *c1, char *c2)
{
	int i, k;
	i = ft_strlen(c1);
	k = 0;
	while(c2[k] != '\0')
	{
	c1[i] = c2[k];
	k++;
	i++;
	}
	c1[i] = '\0';
	return (c1);
}
