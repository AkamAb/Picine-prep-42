#include <unistd.h>
const int MAX = 100;

void ft_putstr(){

char c[MAX];

int i = 0;

write(1 , "give me your caracter", 21);

while(i < MAX-1){
	if( read(0 , &c[i] , 1) <= 0 || c[i] == '\n') break;

	write(1 , &c[i] , 1);
	i++;
	c[i] = '\0';
	}

}

int main(){

ft_putstr();

return 0;
}
