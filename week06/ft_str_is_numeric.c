#include <unistd.h>
#include "libft.h>"

int ft_str_is_numric (char* c)
{
	int i = 0;
	while ( c[i] != '\0' )
	{
		if (c[i] > '9' || c[i] < '0')
		{
			return (0);
		}
		i++;
	}
	return (1);

