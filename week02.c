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

void ft_is_negative(int i ){

	if(i>= 0)
		write(1 , "P\n" , 2);
	else 
		write(1 , "N\n" , 2);


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
{
       	char i;
//	ft_print_alphabet();
//	ft_print_reverse_alphabet();

	write(1 , "write a number" , 14);

	read( 0 , &i , 1);
	if (c == '-') 
	       	ft_is_negative(-1);
	else 
	       	ft_is_negative(1);

	return 0;
}	
