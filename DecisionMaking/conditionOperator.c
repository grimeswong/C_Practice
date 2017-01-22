// The ? : Operator
// We have covered conditional operator ? : in the previous chapter which can be used to replace if...else statements.
// It has the following general form −
// Exp1 ? Exp2 : Exp3;
// Where Exp1, Exp2, and Exp3 are expressions. Notice the use and placement of the colon.
// The value of a ? expression is determined like this −
// Exp1 is evaluated. If it is true, then Exp2 is evaluated and becomes the value of the entire ? expression.
// If Exp1 is false, then Exp3 is evaluated and its value becomes the value of the expression.

#include <stdio.h>

int main() {

  int a = 5;
  char yes[] = "yes";
  char no[] = "no";

  printf("The result is : %s\n", a >= 5 ? yes : no);

  return 0;
}

// print: The result is : 5
