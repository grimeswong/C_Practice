
#include <stdio.h>

int main() {
  int i = 5;
  int *p;
  p = &i;

  printf("Value of pointer is: %d\n", *p);

  printf("Address of pointer is: %p\n", p);

  return 0;
}
