// There are two simple ways in C to define constants −
// Using #define preprocessor.
// Using const keyword.
// #define identifier value

#include <stdio.h>

#define LENGTH 10 // constants usually use uppercase
#define WIDTH 5
#define NEWLINE '\n'

int main() {
  int area;

  area = LENGTH * WIDTH;
  printf("value of area = %d", area);
  printf("%c", NEWLINE);

  return 0;
}
