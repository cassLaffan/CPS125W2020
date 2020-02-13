#include <stdio.h>
#include <math.h>

/* For any integer n > 0, n! is defined as the product of n * (n - 1) * ... * 2 * 1
0! is defined to be 1. It is sometimes useful to have a closed-form definition instead:
for this purpose, an approximation can be used. R.W. Gosper proposed the following
approximation formula:

n! ~= n^n * e^-n * sqrt((2n + 1/3) * pi)

Create a program that prompts the user to enter an integer n, uses Gosper's formula to
approximate n! and then displays the result. The message display should look something 
like this:

5! equals approximately 119.97003
*/

int main(){
    int fact;
    double result;

    printf("Enter a number for which you'd like to calculate the factorial: ");
    scanf("%d", &fact);

    result = pow(fact, fact) * exp(-1 * fact) * sqrt((2*fact + 1/3) * M_PI);

    printf("%d! equals approximately %lf\n", fact, result);

    return(0);
}