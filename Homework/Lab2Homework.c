#include <stdio.h>

/*Write a program that calculated mileage reiimbursement for a 
salesperson at a rate of $0.35 per mile. Your program should 
interact with the user in this manner:

MILEAGE REIMBURSEMENT CALCULATOR
Enter the beginning odometer reading=> 12505.2
Enter ending odometer reading=> 13810.6
You traveled 305.4 miles. At $0.35 per mile, your reimbursement is $106.89.
*/

double getReimbursement(double rate, double traveled){
    double reimbursement;

    reimbursement = rate * traveled;

    return reimbursement;
}

int main(){
    double beginning, ending, travel;
    double reimbursement;
    double rate = 0.35;

    printf("Enter the beginning odometer reading=> ");
    scanf("%lf", &beginning);

    printf("\nEnter ending odometer reading=> ");
    scanf("%lf", &ending);

    travel = beginning - ending;

    reimbursement = getReimbursement(rate, travel);

    printf("You traveled %.1lf miles. At $0.35 per mile, your reimbursement is $%.2lf.\n", travel, reimbursement);

    return(0);
}