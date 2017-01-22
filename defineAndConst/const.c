// There are two simple ways in C to define constants −
// Using #define preprocessor.
// Using const keyword.
// const type variable(ID) = value;

#include <stdio.h>

int main() {

  const int LENGTH = 10;
  const int WIDTH = 5;
  const char NEWLINE = '\n';
  int area;

  area = LENGTH * WIDTH;
  printf("value of area : %d", area);
  printf("%c", NEWLINE);

  return 0; //terminates the main() function and returns the value 0.

}

// Note that it is a good programming practice to define constants in CAPITALS.
