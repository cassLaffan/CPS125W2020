#include <stdio.h>


//Passing in a pointer means that you can poke directly at a variable without having to return anything

void multiplyPointer(int* i){
    *i = *i * 7;
}


int main(){
    int i = 2;

    multiplyPointer(&i);

    printf("%d\n", i);
}