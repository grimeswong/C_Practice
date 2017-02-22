
// Pointer of pointer

#include <stdio.h>

int main() {

  int x = 5;
  int *p = &x;
  int **pop = &p;

  printf("x = %d\n", x); // x = 5
  printf("*p = %d\n", *p);  //*p = 5
  printf("**p = %d\n", **pop);  //**pop = 5

  x = 10;
  printf("**p = %d\n", **pop);  //**pop = 10

  *p = 15;
  printf("**p = %d\n", **pop);  //**pop = 15

  **pop = 20;
  printf("*p = %d\n", *p);  //*p = 20



}
