
// print control character


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char *argv[]) {

  char input;
  char newChar;
  char newCharA[3];

  input = fgetc(stdin);       // read the character from standard input
  while (input != EOF) {      // if the input is not EOF (signal)
      if (isprint(input)) {
        // keep normal
      } else {
        if (input >= 0 && input <=31 && input !='\n' && input != 9) {
            newChar = input +64;
            newCharA[0] = '^';
            newCharA[1] = newChar;
            newCharA[2] = '\0';
            printf("%s", newCharA);
        } else if (input == 127 && input!= '\n') {
            printf("%c", input);
        } else if (input == 9) {
            printf("%c", '\t');
            input = '\t';
        } else if (input == '\n' || input == '\r'){ // This is enter or newline
            // printf("This is enter\n");
        } else {
            // print normally
        }
      }

      fputc(input, stdout);   // put a character to the standard output
      input = fgetc(stdin);   // read the next character from standard input
  }


}
