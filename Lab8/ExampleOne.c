#include <stdio.h>
/*This program will create an array of the size that the user enters
This array will then contain that number of length 2 arrays. These contain coordinates
that the user enters. These coordinates will then be printed to the screen.*/


//This function will print the coordinates. It's kind of redundant, considering 
//that it's a print statement, but it's good to know how to feed multidimentsional arrays 
//as parameters to functions.
void printCoordinates(int numOfCoors, float arr[numOfCoors][2]){
    for(int k = 0; k < numOfCoors; k++){
        printf("Coordinates of location #%d:\n", k);
        printf("Latitude: %.2f\n", arr[k][0]);
        printf("Longitude: %.2f\n", arr[k][1]);
    }
}

int main(){
    printf("How many coordinates do you want to enter? ");

    //This variable will be the length of our 2D array
    int num;
    scanf("%d", &num); //Remember: we need the address to scan into

    float coorArray[num][2];

    printf("Please enter the coordinates as: latitude,longitude.\n");
    //Now we loop through the array and have the user enter in the coordinates
    for(int i = 0; i < num; i++){
        printf("Enter coordinate set #%d: ", i+1);
        scanf("%f,%f", &coorArray[i][0], &coorArray[i][1]);
    }

    printCoordinates(num, coorArray);
    return(0);
}