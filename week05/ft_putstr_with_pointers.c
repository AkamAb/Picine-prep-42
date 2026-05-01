#include <unistd.h>
#include "libft.h"

void ft_putstr (char* c)
{
	int i = 0;
	while( *(c+i) != "\0") //à la place c[i] 
	{
		*c = (*c) + i;
		ft_putchar(*c);
		i++;
	}
}
