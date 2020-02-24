#include <stdio.h>

/*This file will explore a do/while loop.
These loops start with the first iteration,
then check to see if the condition is met.*/

int main(){

    char a;

    do{
        printf("Enter a character ('c' will close the program): ");
        scanf("%c", &a);
        printf("\n");
        getchar();
    }while(a != 'c');

    printf("You did it!\n");
    return(0);
}