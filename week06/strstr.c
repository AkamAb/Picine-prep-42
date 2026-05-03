#include <unistd.h>
#include "libft.h"

char *ft_strstr(char *c1, char *c2)
{
	int i;
	int j;
	if(c2[0] == '\0')
	{
		return(c1);
	}
	i = 0;
	while(c1[i] != '\0')
	{
		j = 0;
		while(c2[j] != '\0' && c1[i + j] == c2[j])
		{
			j++;
		}
		if(c2[j] == '\0')
		{
			return(&c1[i]);
		}
		i++;
	}
	return (0) ;
} 
