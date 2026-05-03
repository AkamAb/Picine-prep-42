#include <unistd.h>
#include "libft.h"

int ft_str_is_lowercase (char* c)
{
	int i = 0;
	if ( c[i] = '\0' )
	{
		return (1);//according to picine rules
	}
	while (c[i] != '\0')
	{
		if ( c[i] <'a' || c[i] > 'z' )
		{
			return (0);
		}
		i++;
	}
	return (1);
}
