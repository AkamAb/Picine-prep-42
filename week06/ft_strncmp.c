#include <unistd.h>
#include "libft.h"

int *ft_strncmp(char* c1, char* c2, unsigned int n)
{
	int i;
	i = 0;
	while(i <= n - 1 && c1[i] != '\0' && c2[i] != '\0')
	{
		if(c1[i] != c2[i])
		{
			break;
		}
		i++;
	}
	return ((unsigned char)c1[i] - (unsigned char)c2[i]);
}
