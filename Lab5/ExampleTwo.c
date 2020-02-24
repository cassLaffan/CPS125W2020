#include <stdio.h>

/*This example will read through a file,
then end when it hits the end of said file.*/

int main(){

    FILE *fp; //remember, we discussed pointers last lab
    char str[100]; //we set a max size for each line
    char* filename = "ExampleText.txt"; 
    fp = fopen(filename, "r"); //the r means it's for reading!

    //Let's check to see if the file actually opened.
    //If not, we'll exit the program with an early return statement

    if(fp == NULL){
        printf("The file is broken, fam. %s \n", filename);
        return(1);
    }

    //now we read the contents of the file to the terminal
    while (fgets(str, 100, fp) != NULL){
        printf("%s", str);
    }

    //remember to always close your files after you're done reading them
    fclose(fp);
    return(0);
}