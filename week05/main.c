#include "libft.h"

int main()
{	int *a;
	int *b;
	char* c;
	a = 54;
	b = 11;
	ft_ultimate_div_mod(&a , &b);
	write(1 , &a , 2);
	write(1 , &b , 2);
	ft_putstr(&c);
	return 0;
}
