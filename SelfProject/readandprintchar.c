// File Name: readandprintchar.c
// Program Purpose: read the characters from the keyboard, then print out the characters
//


#include <stdio.h>

int main(void) {

  char input;

  input = fgetc(stdin);       // read the character from standard input
  while (input != EOF) {      // if the input is not EOF (signal)
      fputc(input, stdout);   // put a character to the stardard output
      input = fgetc(stdin);   // read the next character from standard input
  }
}
