#include <stdio.h>
#include <stdlib.h>
/*This example will work with a more dynamic array where we don't know
the sizes of our inner arrays until runtime (unlike in our coordinates).
The example is simple: we want to add friends on our game console with their 
friend codes, but we don't know the length of the friend codes.*/


//This function works similarly to the one from the previous example, ExampleTwo.c
//But instead of printing coordinates, it prints friend codes.
void printFriends(char** arr, int num, int len){
    for(int k = 0; k < num; k++){
        printf("Friend code #%d is: ", k+1);
        for(int i = 0; i < len; i++){
            printf("%c", arr[k][i]);
        }
        printf("\n");
    }
}

int main(){
    //This variable will be the length of our 2D array
    int numOfFriends, friendCodeLength;
    char **friendArray;

    printf("How many friends do you want to add today? ");
    scanf("%d", &numOfFriends); //Remember: we need the address to scan into
    printf("\n");
    //This line is doing something very funky.
    //What this is doing is allocating memory (thus, the term m(emory)alloc(ation))
    //for our array. It'll be the size of the number of our coordinates times the 
    //size of a given address.
    friendArray = malloc((numOfFriends - 1) * sizeof *friendArray);

    printf("Now, tell me, how long are these friend codes (in number of characters): ");
    scanf("%d", &friendCodeLength);
    printf("\n");

    //We're doing something funkier here.
    //What this does is allocates the right amount of memory at each index in friendArray
    //for their friend code.
    for(int j = 0; j < numOfFriends; j++){
        friendArray[j] = malloc(friendCodeLength * sizeof *friendArray[j]);
    }

    //Let's populate it now with a character array at each index while we're at it
    //Remember how we have garbage characters when looking for characters?
    for(int i = 0; i < numOfFriends; i++){
        char placeHolder;
        scanf("%c", &placeHolder);
        printf("What is friend #%d's friend code? ", i+1);
        for(int o = 0; o < friendCodeLength; o++){
            scanf("%c", &friendArray[i][o]);
        }
    }

    printFriends(friendArray, numOfFriends, friendCodeLength);

    return(0);
}