#include <unistd.h>

void ft_print_numbers(void){
    char display_char;
        display_char = '0'; write(1,&display_char,1);
		display_char = '1'; write(1,&display_char,1);
		display_char = '2'; write(1,&display_char,1);
		display_char = '3'; write(1,&display_char,1);
		display_char = '4'; write(1,&display_char,1);
		display_char = '5'; write(1,&display_char,1);
		display_char = '6'; write(1,&display_char,1);
		display_char = '7'; write(1,&display_char,1);
		display_char = '8'; write(1,&display_char,1);
		display_char = '9'; write(1,&display_char,1);
		display_char = '\n'; write(1,&display_char,1);
}