#include <unistd.h>
#include "libft.h"

int ft_strcmp(char *c1 , char *c2)
{
	int i = 0;

	while ( c1[i] != '\0' && c2[i] != '\0' && c1[i] == c2[i])
	{
		i++;
	}
	return((unsigned char)c1[i] - (unsigned char)c2[i]);
}
