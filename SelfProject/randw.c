
// This program can read each character and print out to screen by stream



#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[]) {

  int input;

  input = fgetc(stdin);       // read the character from standard input
  while (input != EOF) {      // if the input is not EOF (signal)

      if (input != '\n' && isprint(input) == 0) { // if isprint = true
      }
      fputc(input, stdout);   // put a character to the standard output
      input = fgetc(stdin);   // read the next character from standard input

  }

  printf("%d\n", '\031');
}
