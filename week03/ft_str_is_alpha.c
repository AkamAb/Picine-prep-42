#include <unistd.h>
#include "libft.h"

const int MAX = 26;

void ft_str_is_alpha(){

char c[MAX];
int i = 0;
int is_alpha = 1;  //we thought all is alphabet minewhile the oppsite is well be proved

write( 1 , "write just charcter of alphabet" , 31);
int n = read(0 , c , 100); // for clean coding i read (read) hear for having i short while condition

while(i < n - 1){ //n-1 for last charcter '\0' in all strings
	if(!(( c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))){
			is_alpha = 0; //when the characters dose not respect the  rules we well change our intiger
			break; //and we don't need anymore to search in the rest of string

			}
			i++;

}if(is_alpha == 1)
	write(1 , "1\n" , 2);
 else
 	write(1 , "0\n" , 2);
}

