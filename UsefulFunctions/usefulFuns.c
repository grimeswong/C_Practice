/*  Name:
 *  Function:
 *  Parameters:
 *  Return:
 *
 */







/*** Preprocessor ***/
#include <stdio.h>    //Standard Input/Output library
#include <string.h>   //String handling library
#include <stdlib.h>   //General Utilities library eg. atoi, atof
#include <ctype.h>    //Character handling library  eg. isdigit, iscntl, isprint
#include <unistd.h>   //execvp(), environ(), pipe()


/*** Function Prototype ***/
char *tokeniser(char *string, char *arglist[]);                             //return: argumentlist, parameter: string of readline
char *trimnewline(const char *string);
char *trimheadspace(const char *string);

int main() {

  /*** Local Variables ***/
  char readline[1000];          //allow 1000 characters
  char *readlinePtr = NULL;

  char *arglistPtr = NULL;
  char *arglist[100];  // allow 100 strings in array (string array)


  readlinePtr = fgets(readline, 1000, stdin);                                //usage: fgets(string, maxsize, file pointer)
  while(readlinePtr != NULL) {
    printf("Read Successfully!!!: %s\n", readlinePtr);                          //debugger:
    // arglistPtr = tokeniser(trimnewline(readlinePtr), arglist);
    arglistPtr = tokeniser(readlinePtr, arglist);

    /*** debugger: print out elements in array include last element(NULL)***/
    int lastElement = 0;
    for(int i=0; arglist[i] != NULL; i++) {
      printf("arglist[%i] = %s\n", i, arglist[i]);
      lastElement = i;
    }
    printf("arglist[%d] = %s\n",lastElement+1, arglist[lastElement+1]);
    /*** end debugger: print out elements in array ***/

    readlinePtr = fgets(readlinePtr, 1000, stdin);
  }

  return 0;
}

/*  Name: tokenizer
 *  Function: break up string and store it back to a string array
 *  Delimiters: space' ', tab'\t, newline'\n' (can be changed)
 *  Parameters: a string (readline), an array of string (arglist)
 *  Return: put the tokens to string array list
 */
char *tokeniser(char *string, char *arglist[]) {
  int counter = 0;

  char *tokenPtr = strtok(string, " \t\n");                                      // begin tokenizing sentence    // if only one argument the first one also end with newline
  while(tokenPtr != NULL) {
    arglist[counter] = tokenPtr;                                                //
    counter++;
    tokenPtr = strtok(NULL, " \t\n");                                           // get next token: (strtok(NULL, " "));
  }
  return *arglist;
}

/*  Name: trimnewline
 *  Function: trim the newline character at the end
 *  Parameters: a string
 *  Return: a new string without characters at the end
 */
 char *trimnewline(const char *string) {
   char *newstring;
   int pos = strlen(string) - 1;                                  //second last of the string array

   newstring = malloc(strlen(string) + 1 * sizeof(char));
   if (newstring != NULL) {
    //  printf("Memory allocation successful\n");                    //debugger:
     if(string[pos] == '\n'){                                     //if string has a newline character
      //  printf("String has a newline character\n");             //debugger:
      //  printf("String before trimnewline = %s\n", string);     //debugger:
       strcpy(newstring, string);
       newstring[pos] = '\0';
      //  printf("String after trimnewline = %s\n", newstring);      //debugger:
     } else {                                                     //else string doesn't have a newline character
      //  printf("String doesn't have a newline character\n");       //debugger:
       strcpy(newstring, string);
     }
   } else {
     perror("Unable to allocate memory!!!\n");                   //erorr message: Unable allocate memory
   }
   return newstring;                                              //no need to free newsting that when the function call ends, the memory is released
 }

 /*  Name: trimheadspace
  *  Function: trimheadspace function is that trim the space before the first character of a string
  *  Parameters: line of string
  *  Return: newstring without any space
  */
 char *trimheadspace(const char *string) {
   char *newstring;
   int firstspace = 0;
   int k = 0;
   newstring = malloc(strlen(string) + 1 * sizeof(char));
   for(int i =0; strlen(string) >= i ; i++) {
     if ((string[i] == ' ' || string[i] == '\t') && firstspace == 0) {
     } else if (string[i] != ' ' || string[i] != '\t'|| firstspace == 1) {
       newstring[k] = string[i];
       k++;
       firstspace = 1;
     } else {
       //skip
     }
   }
   return newstring;
 }
