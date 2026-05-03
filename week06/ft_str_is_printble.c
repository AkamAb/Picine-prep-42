#include <unistd.h>
#include "libft.h"

int ft_str_is_printble (char* c)
{
	int i = 0;
	if ( *(c + i) = '\0')
	{
		return (1);
	}
	while ( *(c + i) != '\0')
	{
		if ( *(c + i) < 32 || *(c + i) > 126 )
		{
			return (0);
		}
		i++;
	}
	return (1);
}
