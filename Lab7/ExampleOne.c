#include <stdio.h>

//This example will simply populate a character array with "aaaaaa"
int main(){
    char example[7];

    for(int i = 0; i < 7; i++){
        example[i] = 'a';
    }
    printf("%s", example);
    return(0);
}