// File Name: getopt.c
// Program Purpose: get the arguments with flags (options)
//

/*** Preprocessor ***/
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

  int flagA = 0;
  int flagB = 0;
  int flagC = 0;
  int c = 0;

  while ((c = getopt(argc, argv, "abc")) != -1) {

    switch(c) {
      case 'a':
        flagA++;
        continue;
      case 'b' :
        flagB++;
        continue;
      case 'c' :
        flagC++;
        continue;

      default :
        printf("defalut selected\n");
    }
  }

  printf("Totol argument = %d\n", argc);
  printf("flagA = %d\n", flagA);
  printf("flagB = %d\n", flagB);
  printf("flagC = %d\n", flagC);
  printf("Index starting position = %d\n", optind);

  return 0;
}
