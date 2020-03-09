#include <stdio.h>

/*This program will demonstrate the proper formatting for a small C program.*/


float multiplyByFloat(int exampleArgument){
    float ret = 5.2 * exampleArgument;
    return ret;
}

int multiplyByInt(int exampleArgument){
    int ret = 5 * exampleArgument;
    return ret;
}

int main(){
    float a = multiplyByFloat(3);
    float b = multiplyByFloat(4);

    int c = multiplyByInt(3);
    int d = multiplyByInt(4);

    printf("%f %f %d %d", a, b, c, d);
    return 0;
}