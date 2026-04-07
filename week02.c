#include <unistd.h>

/*void ft_print_alphabet(void)
{
char  i = 'a';
	while(i <= 'z' )
	{
	write(1, &i , 1);
	i++;
	}
}	*/


void ft_print_reverse_alphabet(void)
{
char  i = 'z';
	while(i >= 'a' )
	{
	write(1, &i , 1);
	i--;
	}
}

int main()
{ 
//	ft_print_alphabet();
	ft_print_reverse_alphabet();
	return 0;
}	
