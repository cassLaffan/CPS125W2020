#include <stdio.h>
//This file is just for practice with user input and math operations
void main(){

  //arithmatic operators
  int x, y;
  int sum, mult;
  float divi, remain;

  printf("\nInput the first integer: ");
  scanf("%d", &x);

  printf("\nInput the second integer: ");
  scanf("%d", &y);

  sum = x + y;
  printf("\n%d + %d = %d\n", x, y, sum);

  mult = x * y;
  printf("\n%d x %d = %d\n", x, y, mult);

  divi = x / y;
  printf("\n%d / %d = %.2f\n", x, y, divi);

  remain = x % y;
  printf("\n%d %% %d = %.2f\n", x, y, remain);

  //incrementations
  printf("\n ++x = %d\n", ++x);
  printf("\n --y = %d\n", --y);
  printf("\n incrementation of a floating point = %.2f\n", ++divi);
  //after these incrementations, the values of x and y have changed

  //boolean operators
  printf("\n Is %d equal to %d? %d\n", x, y, x == y);

  //logical operators
  int logicalResult = (x == y) || (x > y);
  printf("\n (x == y) || (x > y) = %d \n\n", logicalResult);

}
