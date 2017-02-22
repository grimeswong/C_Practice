#include <stdio.h>

int main() {
  int var1;
  char var2[10];

  printf("Address of var1 variable : %x\n", &var1); //"&" get the memory address
  printf("Address of var2 variable : %x\n", &var2); // %x display unsigned hexadecimal value, lower case a-f, no leading 0 or x
  //unsigned integer
  printf("Address of var2 variable : %p\n", &var2); // hexadecimal value 0x7fff5d3fdb5e


  return 0;
}

// Result:
// Address of var1 variable : 54bafb54
// Address of var2 variable : 54bafb5e
// Address of var2 variable : 0x7fff5d3fdb5e
