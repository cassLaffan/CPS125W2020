#include <stdio.h>
#include <stdlib.h>
/*This program builds upon the concepts I introduced in ExampleOne.c
If you haven't already, go look at and run ExampleOne. It has the easiest logic 
to follow, since we don't bug around in memory. This example will begin doing that, 
so build up an understanding, first, of how multidimensional arrays work.*/


//This function will print the coordinates. This time, however, we know for sure 
//that we won't know our length until runtime. Again, this function is reduant, 
//but I want to create an understanding of using memory and pointers.
void printCoordinates(float** arr, int coors){
    for(int k = 0; k < coors; k++){
        printf("Coordinates of location #%d:\n", k);
        printf("Latitude: %.2f\n", arr[k][0]);
        printf("Longitude: %.2f\n", arr[k][1]);
    }
}

int main(){
    printf("How many coordinates do you want to enter? ");

    //This variable will be the length of our 2D array
    int num;
    float **coorArray;
    scanf("%d", &num); //Remember: we need the address to scan into

    //This line is doing something very funky.
    //What this is doing is allocating memory (thus, the term m(emory)alloc(ation))
    //for our array. It'll be the size of the number of our coordinates times the 
    //size of a given address.
    coorArray = malloc(num * sizeof *coorArray);

    //The example I chose isn't the greatest because we know that coordinates will always contain 2 floating point numbers
    //My bad.
    for(int j = 0; j < num; j++){
        coorArray[j] = malloc(2 * sizeof *coorArray[j]);
    }

    printf("Please enter the coordinates as: latitude,longitude.\n");
    //Now we loop through the array and have the user enter in the coordinates
    for(int i = 0; i < num; i++){
        printf("Enter coordinate set #%d: ", i+1);
        scanf("%f,%f", &coorArray[i][0], &coorArray[i][1]);
    }

    printCoordinates(coorArray, num);
    return(0);
}