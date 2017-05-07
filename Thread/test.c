#include <stdio.h>
#define MAXLEN 256

int main() {
  int n;
  char buf[MAXLEN];
  while((n = fread(buf,1,sizeof(char),stdin)) != 0){
    printf("n: %d:",n);
    fflush(stdout); /* force it to go out */
    fwrite(buf, 1, sizeof(char), stdout);
  }
  return 1;
}
