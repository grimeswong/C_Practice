
#include <stdio.h>



int main() {

  // Declare an array with 5 elements and assign values
  double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0 };

  // pointer
  double *p; //declare type as a pointer

  p = balance; //assign pointer "p" point to array "balance"
  int i;
  printf("Array values using pointer\n");

  for(i=0;i<5;i++) {
    printf("*(p + %d) : %f\n", i, *(p + i) );
  }

  printf("Array values using balance as address\n");

  for (i=0;i<5;i++) {
    printf("*(balance= %d) : %f \n", i, *(balance + i));
  }

  return 0;
}
