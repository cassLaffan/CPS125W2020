#include <stdio.h>

/*This file will build upon the last example,
by also writing to a file.*/

int main(){

    FILE *readFile;
    FILE *writeFile;
    char str[100]; //we set a max size for each line
    char* readName = "ExampleText.txt"; 
    char* writeName = "WriteExample.txt";
    readFile = fopen(readName, "r"); //the r means it's for reading!
    writeFile = fopen(writeName, "w"); //the w means it's for writing!



    if(readFile == NULL){
        printf("The file is broken, fam. %s \n", readName);
        return(1);
    }
    else if(writeFile == NULL){
        printf("The file is broken, fam. %s \n", writeName);
        return(1);
    }

    //now we read the contents of the file to the terminal
    while (fgets(str, 100, readFile) != NULL){
        fprintf(writeFile, "%s", str);
    }

    //remember to always close your files after you're done reading them
    fclose(readFile);
    fclose(writeFile);
    return(0);
}