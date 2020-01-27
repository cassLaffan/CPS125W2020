#include <stdio.h>

/*The purpose of this file is to give an introduction to C style strings.*/
/*Which are character arrays.*/

struct stringStruct{
    char *stringEx;
};

/*Always remember that you need the null character, \0, at the end of your character array!*/

int main(){

    //Here is a basic C style string:
    char exampleOne[] = "Hello World!\0";
    printf("Our first C string is: %s\n", exampleOne);

    //Now let's work with a pointer (danger zone)
    char *exampleTwo = exampleOne;
    printf("Our second C string is: %s\n", exampleTwo);

    //What happens when we directly assign a pointer?
    char *exampleThree = "Hi, world!\0";
    printf("'Our third C string is: %s\n", exampleThree);

    //Now, let's pick out a specific character.
    char ch = exampleOne[3];
    printf("The fourth character in exampleOne is: %c\n", ch);

    //Finally, we can make a simple struct and see how adding a string works
    struct stringStruct exampleFour;
    exampleFour.stringEx = "This is our struct string!\0";

    printf("Our final string is: %s\n", exampleFour.stringEx);

    return 0;
}