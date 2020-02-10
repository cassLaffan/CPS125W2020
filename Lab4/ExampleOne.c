#include <stdio.h>
#include <string.h>

int main(){
    int len = 6;
    char example[] = {'H', 'e', 'l', 'l', 'o', '!'}; 

    for(int i = 0; i < len; i++){
        printf("%c", example[i]);
    }

    return(0);
}