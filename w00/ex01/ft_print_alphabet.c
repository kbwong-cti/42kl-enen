#include <unistd.h>

void ft_print_alphabet(void){
    char display_char;
    display_char = 'a'; write(1,&display_char,1);
		display_char = 'b'; write(1,&display_char,1);
		display_char = 'c'; write(1,&display_char,1);
		display_char = '\n'; write(1,&display_char,1);
}