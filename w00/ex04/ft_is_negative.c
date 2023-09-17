#include <unistd.h>



void ft_is_negative(int n){
    char display_char;
    // if (n < 0){
    //     display_char = 'N';
        
    // } else {
    //     display_char = 'P';
        
    // }
    display_char =(n<0)? 'N' : 'P';
    write(1,&display_char,1);
}


    