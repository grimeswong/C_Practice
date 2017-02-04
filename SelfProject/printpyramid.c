

// print pyramid depends on the user enter number
#include <stdio.h>
#include <string.h>

int row;
void printPat();  //must declare the method before use
void printRevPat();

int main() {
  printf("Enter a number please: ");
  scanf("%d", &row); //%d is integer, "&" must be used for store the address of variable, excepts string
  printf("You number is %d\n", row);
  printPat();
  printRevPat();
  return 0;
}

void printPat() { // pyramid
  int i, j;
  for (i=0; i<row; i++) {
    for (j=0; j<= i; j++) {
      printf("*");
    }
    printf("\n");
  }
}

void printRevPat() { //reverse pyramid
  int temp = row-1;
  for (int i=0; i<row; i++) {
    for (int j=0; j<temp; j++) {
      printf("*");
    }
    temp--;
    printf("\n");
  }
  // alter methods
  // for(i=rows; i>=1; --i)
  //   {
  //       for(j=1; j<=i; ++j)
  //       {
  //           printf("* ");
  //       }
  //       printf("\n");
  //   }
}
