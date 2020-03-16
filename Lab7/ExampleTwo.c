#include <stdio.h>

/*This example will make two arrays, one pre-populated and one empty.
It will then feed the values in from one array to the other.*/

int main(){
    double arrOne[] = {3.2, 1.1, 2.6, 1.6}; //pre-populated array
    double arrTwo[4]; //Empty array of length four

    for(int i = 0; i < 4; i++){
        //This adds the element to array two at the same index as array one, but the value is multiplied by 4.1
        arrTwo[i] = arrOne[i] * 4.1;
        //Now we print it to see its value
        printf("%.1lf, ", arrTwo[i]);
    }
    return(0);
}