// show the differences of the pre-increment and post-increment

#include <stdio.h>

int main() {
  int i=0, pre, post;

  while (i<10) { // pre-increment
    printf("i = %d, ", i);
    pre = ++i;
    printf("pre-increment = %d\n", pre);
    // Result: output up to 10
  }

  printf("\n");
  i=0;

  while (i<10) { // post-increment
    printf("i = %d ,", i);
    post = i++;
    printf("post-increment = %d\n", post);
    // Result: output up to 9
  }
}
