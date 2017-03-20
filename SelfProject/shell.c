// Prompting shell vrsion 1


#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>

#define MAXARGS 20
#define ARGLEN  100


char *makeString(char *buf);
int execute(char * arglist[]);

int main() {
  char *arglist[MAXARGS+1]; // an array of ptrs, +1 for add up NULL at the end of list which is easily to count elements in an array
  int numargs;
  char argbuf[ARGLEN];
  char *makeString();
  numargs = 0;

  while (numargs < MAXARGS) {
    printf("Arg[%d]? ", numargs);
    if ( fgets(argbuf, ARGLEN, stdin) && *argbuf != '\n') {
      arglist[numargs++] = makestring(argbuf);
    } else {
      if (numargs > 0) {
        arglist[numargs] = NULL;
        execute(arglist);
        numargs = 0;
      }
    }
  }
  return 0;
}

int execute(char * arglist[]) {
  execvp(arglist[0], arglist);
  perror("execvp failed");
  exit(1);
}

char *makestring(char *buf) {
  char *cp, *malloc();
  buf[strlen(buf)-1] ='\0';
  cp = malloc(strlen(buf)+1);
  if (cp == NULL) {
    fprintf(stderr, "No memory\n");
    exit(1);
  }
  strcpy(cp, buf);
  return cp;
}
