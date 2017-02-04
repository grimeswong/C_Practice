#include <stdio.h>

int main() {
  int var1;
  char var2[10];

  printf("Address of var1 variable : %x\n", &var1); //"&" get the memory address
  printf("Address of var2 variable : %x\n", &var2); // %x get the memory address

  return 0;
}
