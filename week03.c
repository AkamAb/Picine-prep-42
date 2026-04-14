#include <unistd.h>
const int MAX = 100;//detrmain for have a limit number of strings

void ft_putstr(){

char c[MAX];

int i = 0;

write(1 , "give me your caracter", 21);//request to client

while(i < MAX-1){//it because at the end of MAX we need two place for \0
	if( read(0 , &c[i] , 1) <= 0 || c[i] == '\n') break;//according ASCII we dont have character code negative and \n is for enter

	write(1 , &c[i] , 1);
	i++;
	c[i] = '\0';//at the end of string's chain we have to put \0 
	}

}

int main(){

ft_putstr();

return 0;
}
