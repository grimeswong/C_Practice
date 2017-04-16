

/*** Preprocessor ***/
#include <stdio.h>    //Standard Input/Output library
#include <string.h>   //String handling library
#include <stdlib.h>   //General Utilities library eg. atoi, atof
#include <ctype.h>    //Character handling library  eg. isdigit, iscntl, isprint
#include <unistd.h>   //execvp(), environ(), pipe()

int main() {

  // char characters[6];                           //a character array for maxmium 5 characters with end of '\0'
  // characters = "ABCD";                          //error: array type 'char [5]' is not assignable
  // characters = {'A','B','C','D','E'};           //error: expected expression
  char characters1[6] = {'A', 'B', 'C', 'D', 'E', '\0'};
  char characters2[] = "ABCDE";
  printf("%s\n", characters1);
  printf("%s\n", characters2);

  char *string1;
  string1 = "STRING";
  printf("%s\n", string1);
  string1 = "STRING CHANGED";
  printf("%s\n", string1);                          // <- print the value of string
  printf("%c\n", *string1);                         // <- print the pointer first point to character
  
  return 0;
}
