#include <stdio.h>
#include <string.h>

/*This program demonstrates the basic stucture of a... struct.*/
/*Structs are used to define datatypes in C, kind of like defining an object.*/
/*Please note: they're NOT objects, though.*/

struct exampleStruct{
    char *title;
    int exampleID;
};

int main(){

    struct exampleStruct ex;

    ex.exampleID = 1;
    strcpy(ex.title, "Cassandra");

    printf("Example ID is: %d\n", ex.exampleID);
    printf("Example title is: %s\n", ex.title);

    return 0;
}