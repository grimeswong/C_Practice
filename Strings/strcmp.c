
// String comparision

#include <stdio.h>
#include <string.h>

int main() {
  char string1[9] = "Chan";
  char string2[9] = "Chen";
  if (strcmp (string1,string2) == 0) { // "0" means no difference
    printf("Code = %d\n", strcmp(string1, string2));
    printf("It's same\n");
  } else {
    printf("Strings are difference\n");
    printf("Code = %d\n", strcmp(string1, string2));
  }
}

// Result
// Strings are difference
// Code = -4
