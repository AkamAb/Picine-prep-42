#include <unidts.h>
#include "libft.h"

int ft_str_is_uppercase (char* c)
{
	int i = 0;
	if (c[i] = '\0')
	{
		return (1);
	}
	while(c[i] != '\0')
	{
		if (c[i] < 'A' || c[i] > 'Z')
		{
			return (0)
		}
		i++;
	}
	return (1);
}
