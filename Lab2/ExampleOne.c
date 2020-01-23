#include <stdio.h>

/*This program will demonstrate the proper formatting for a small C program.*/


/*This function acts as an example as to how to call functions from elsewhere.*/
float exampleFunction(int exampleArgument){
    float exampleReturnValue = exampleArgument * 1.5;
    return exampleReturnValue;
}

int main(){

    printf("This program will call a function and then print out its return value.\n");

    //6 was chosen arbitrarily, it can be any integer fed into the function
    float exampleCall = exampleFunction(6);

    printf("%f\n", exampleCall);

    return 0;
}