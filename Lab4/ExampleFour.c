#include <stdio.h>

//Recall our example last week? Where scanf needs an address and printf doesn't?
//Now you know why!
//Scanf needs the address, whereas printf needs the value

//Now, ask yourself, why does this program output weird numbers?


void conditionA(int* i){
    printf("%d is a good number.\n", i);
}

void conditionB(int* i){
    printf("%d is not between 1 and 3!\n", i);
}

int main(){
    int i;

    printf("Please input a number between 1 and 3.\n");
    scanf("%d", &i);

    switch(i){
        case 1:
        case 2:
        case 3:
            conditionA(&i);
            break;
        default:
            conditionB(&i);
    }

    return(0);
}