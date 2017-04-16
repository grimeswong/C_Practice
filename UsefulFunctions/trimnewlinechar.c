//
//
// Trim the '\n' at the end of a string
//
#include <stdio.h>    //Standard Input/Output library
#include <string.h>   //String handling library
#include <stdlib.h>   //General Utilities library eg. atoi, atof
#include <unistd.h>   //for execvp()

char *trim(const char *string);

int main() {

  char *oldstring = "ls\n";
  char *a[20];
  a[0] = trim(oldstring);
  a[1] = "-l";
  a[2] = NULL;

  printf("%s\n", getenv("PATH"));
  execvp(a[0], a);

  return 0;
}

/*** Trim the newline character ***/
char *trim(const char *string) {
  char *newstring;
  int pos = strlen(string) - 1;

  newstring = malloc(strlen(string)+1 * sizeof(char));

  if (newstring == NULL) {
    printf("Unable to allocate memory !!!\n");
  } else {
    // printf("Memory allocation successful\n");
    if(string[pos] == '\n'){
      // printf("String has a newline character\n");
      // printf("string before trim = %s\n", string);
      strcpy(newstring, string);
      newstring[pos] = '\0';
      // printf("string after trim = %s\n", newstring);
    } else {
      // printf("String hasn't a newline character\n");
      strcpy(newstring, string);
    }
  }
  return newstring;
  free(newstring);
}
