#include <unistd.h>
const int MAX = 100;//determine for have a limit number of strings

/*void ft_putstr(){

char c[MAX];

int i = 0;

write(1 , "give me your caracter", 21);//request to client

while(i < MAX-1){//it because at the end of MAX we need two place for \0
	if( read(0 , &c[i] , 1) <= 0 || c[i] == '\n') break;//according ASCII we dont have character code negative and \n is for enter

	write(1 , &c[i] , 1);
	i++;
	c[i] = '\0';//at the end of string's chain we have to put \0 
	}

}*/
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
int main(){

//ft_putstr();
ft_str_is_alpha();
return 0;
}
