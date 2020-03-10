#include <stdio.h>

/*Here are two examples of functions with more than one parameter*/

//There can be multiple lines in a function, but to save space, I simply
//have it returning the value right off of the bat
double multiplyTwo(double a, double b){
    return a * b;
}

//Remember: the variables in the brackets below are parameters
//They specify what the function is expecting to work with
int multiplyThree(int a, int b, int c){
    return a * b * c;
}

//Notice how there is an int in front of the main()?
//That's because main is also a function, and its return type is an int!
int main(void){

    double doubleOne, doubleTwo;

    printf("Please input two doubles for multiplication: ");
    //Notice how we need the references to where we're storing these values?
    scanf("%lf %lf", &doubleOne, &doubleTwo);

    //Whenever you use a function, it's called a "function call"
    //(As in, you're calling on the function)
    double multiple = multiplyTwo(doubleOne, doubleTwo);
    printf("The value for the doubles multiplied together is: %.2lf \n", multiple);

    int intOne, intTwo, intThree;

    printf("Please input three integers for multiplication: ");
    scanf("%d %d %d", &intOne, &intTwo, &intThree);

    //Notice how I don't assign a variable here for the multiplyThree call?
    //That's because you don't need one! You can have this call replace a static value (like 3)
    //And it will act the same.
    printf("The value for the multiplication of the integers is: %d \n", multiplyThree(intOne, intTwo, intThree));
    //Be careful though, since after this printf executes, that value for the multiplyThree disappears!

    return 0;
}