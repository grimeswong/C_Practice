

// print empty string
#include <stdio.h>
#include <string.h>

char *printBuffer(char *buffer);

int main(void) {

  char *emptyPoint = "\0";
  char *new = "abc ";

  printf("emptyPoint is %s\n", emptyPoint);
  printf("%s", emptyPoint);
  printf("%s", emptyPoint);
  printf("%s", emptyPoint);
  printf("%s", emptyPoint);
  printf("%s", emptyPoint);
  printf("emptyPoint end is %s\n", emptyPoint);

  printf("New buffer is %s\n", printBuffer(new));
}

char *printBuffer(char *buffer) {
  char buffersize[1024];
  char* newbuffer = buffersize;
  strcpy(newbuffer,buffer);
  strcat(newbuffer, "defghij");
  return newbuffer;
}
