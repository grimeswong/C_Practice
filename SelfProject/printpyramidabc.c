
// print pyramid by abc

#include <stdio.h>

char abcArray[26] = {'A','B','C','D','E','F','G','H','I','J','K','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};


void printabcArray();
void printPyramid();

int sizeofarray = sizeof(abcArray) / sizeof(abcArray[0]); // to count how many elements in array
int row;

int main() {

  printf("Enter a number of row? ");
  scanf("%d", &row);
  printf("%d\n", row);
  // printabcArray();
  printPyramid();
}

void printabcArray() { // remember the last elements of array is '/0'
  for (int i=0; i<sizeofarray; i++) {
    printf("%c, ", abcArray[i]);

  }
}

void printPyramid() { // only allow for 26 due to the number of alphabets
  for (int i=0; i<row; ++i) {
    int positions = i;
    for (int j=0; j<=i; ++j) {
      if(positions > 25) {
        positions = positions - 26;
      }
      printf("%c", abcArray[positions]);
    }
    printf("\n");
  }
}
