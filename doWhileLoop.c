// Unlike for and while loops, which test the loop condition at the top of the loop,
// the do...while loop in C programming checks its condition at the bottom of the loop.
// A do...while loop is similar to a while loop, except the fact that it is guaranteed to execute at least one time.

#include <stdio.h>

int main() {
  /* local variable declaration */;
  int i = 0;

  do {
    printf("i = %i\n", i);
    i++;
    
  } while (i <= 10);

  return 0;
}

//print : i = 0
//         ..
//        i = 10
