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

void ft_is_negative(int *i ){

while(read(1, &i , 1)){
	if(i>= 0)
		write(1 , 'P' , 1);
	else 
		write(1 , 'N' , 1);

	}
}

/*void ft_print_reverse_alphabet(void)
{
char  i = 'z';
	while(i >= 'a' )
	{
	write(1, &i , 1);
	i--;
	}
}*/

int main()
{ int i;
//	ft_print_alphabet();
//	ft_print_reverse_alphabet();
        write(1 , "write a number" , 14);
        ft_is_negative(i);	
	return 0;
}	
